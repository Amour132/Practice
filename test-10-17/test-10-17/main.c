//1.��д������ 
//unsigned int reverse_bit(unsigned int value); 
//��������ķ��� ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ�� 
#include <stdio.h>
#include <math.h>
unsigned int reverse_bit(unsigned int value)
{
	unsigned int a = 0;
	int i = 0;
	for (i = 0; i<32; i++)
	{
		a = a + ((value >> i) & 1)*pow(2, 31 - i);
	}
	return a;
}
int main()
{
	int value = 0;
	unsigned int a = 0;
	printf("�����룺\n");
	scanf("%u", &value);
	a = reverse_bit(value);
	printf("%u", a);

}
//2..��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
#include <stdio.h>
float avarge_two(int a, int b)
{
	float avarge = 0;
	avarge = a + (float)(b - a) / 2;
	return avarge;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	float avarge = 0;
	printf("�������������֣�\n");
	scanf("%d%d", &num1, &num2);
	avarge = avarge_two(num1, num2);
	printf("%f", avarge);
	return 0;
}

//3.���ʵ�֣� 
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ� 
//���ҳ�������֡���ʹ��λ���㣩 
#include <stdio.h>
int search_different(int arr[9])
{
	int differ = 0;
	int i = 0;
	differ = arr[0] ^ arr[1];
	for (i = 1; i<8; i++)
	{
		differ = differ ^ arr[i + 1];
	}
	return differ;
}
int main()
{
	int arr[9] = { 1, 2, 3, 4, 4, 3, 2, 1, 9 };
	int num = 0;
	num = search_different(arr);
	printf("%d", num);
	return 0;
}

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