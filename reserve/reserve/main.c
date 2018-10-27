//4.有一个字符数组的内容为:"student a am i",请你将数组的内容改为"i am a student". 
//要求： 
//不能使用库函数。只能开辟有限个空间（空间个数和字符串的长度无关）。 

#include <stdio.h>
int Strlen(const char *arr)//求字符串长度
{
	int length = 0;
	while (*arr++)
	{
		length++;
	}
	return length;
}
void Turn(char *left, char *right)
{
	char* left1 = left;
	char* right1 = right;
	char temp;
	while (left1 < right1)
	{
		temp = *left1;
		*left1 = *right1;
		*right1 = temp;
		left1++;
		right1--;
	}
}
void Flipping(char *arr)
{
	int length = 0;
	length = Strlen(arr);
	Turn(arr, arr + length - 1);
	while (*arr != '\0')
	{
		char *str = arr;
		while ((*arr != ' ') && (*arr != '\0'))
		{
			arr++;
		}
		Turn(str, arr - 1);
		if (*arr != '\0')
		{
			arr++;
		}
	}
}
int main()
{
	int i = 0;
	char arr[] = "student a am i";
	Flipping(arr);
	printf("%s", arr);
	return 0;
}