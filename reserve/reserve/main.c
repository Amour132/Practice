//4.��һ���ַ����������Ϊ:"student a am i",���㽫��������ݸ�Ϊ"i am a student". 
//Ҫ�� 
//����ʹ�ÿ⺯����ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ��� 

#include <stdio.h>
int Strlen(const char *arr)//���ַ�������
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