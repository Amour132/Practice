//1.дһ���������ز����������� 1 �ĸ��� 
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	printf("please enter a number\n");
	scanf("%d", &num);
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d", count);
	return 0;
}

#include <stdio.h>
int main()
{
	int a = 0;
	int count = 0;
	printf("�����룺");
	scanf("%d", &a);
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	printf("%d", count);

	return 0;
}


//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С� 
#include <stdio.h>  
#pragma warning(disable:4996)  
#include<Windows.h>  
int main()
{
	int date = 0;
	printf("���������֣�");
	scanf("%d", &date);
	int a[32];
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		a[i] = date % 2;
		date /= 2;
	}
	printf("ż����");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	printf("������");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	system("pause");
	return 0;
}


//3. ���һ��������ÿһλ�� 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("������һ����:  ");
	scanf("%d", &a);
	while (a)
	{
		printf("%d  ", a % 10);
		a /= 10;
	}
	system("pause");
	return 0;
}


//4.���ʵ�֣� 
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
#include<stdio.h>  
int main()
{
	int m = 0;
	int n = 0;
	int tmp = 0;
	int count = 0;
	printf("������������\n");
	scanf("%d%d", &m, &n);
	tmp = m^n;
	while (tmp > 0)
	{
		if (tmp % 2 == 1)
			count++;
		tmp = tmp / 2;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}