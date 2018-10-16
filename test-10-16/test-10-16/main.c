//1.写一个函数返回参数二进制中 1 的个数 
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
	printf("请输入：");
	scanf("%d", &a);
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	printf("%d", count);

	return 0;
}


//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。 
#include <stdio.h>  
#pragma warning(disable:4996)  
#include<Windows.h>  
int main()
{
	int date = 0;
	printf("请输入数字：");
	scanf("%d", &date);
	int a[32];
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		a[i] = date % 2;
		date /= 2;
	}
	printf("偶数：");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	printf("奇数：");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	system("pause");
	return 0;
}


//3. 输出一个整数的每一位。 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入一个数:  ");
	scanf("%d", &a);
	while (a)
	{
		printf("%d  ", a % 10);
		a /= 10;
	}
	system("pause");
	return 0;
}


//4.编程实现： 
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
#include<stdio.h>  
int main()
{
	int m = 0;
	int n = 0;
	int tmp = 0;
	int count = 0;
	printf("输入两个整数\n");
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