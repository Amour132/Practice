//1.�������봴���˷���
#include<stdio.h>

int Multiplication_table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%2d  ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int n = 0;
	printf("�����룺");
	scanf("%d", &n);
	Multiplication_table(n);

	return 0;
}


//2.�ú���������������ֵ
#include<stdio.h>
int change(int *x, int *y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
	return 0;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	change(&a, &b);
	printf("a=%d,b=%d", a, b);
	return 0;
}


//3.ʵ��һ�������ж��Ƿ�������
#include<stdio.h>
int Leap_year(int year)
{
	return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
int main()
{
	int year = 0;
	int ret = 0;
	printf("��������Ҫ�жϵ����");
	scanf("%d", &year);
	ret = Leap_year(year);
	if (ret == 1)
	{
		printf("������\n");
	}
	else
	{
		printf("��������");
	}
	return 0;
}



//4.����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
#include<stdio.h>
int reverse(int arr[])//�ý���ʵ����������
{
	int i = 0;
	int j = 0;
	int t = 0;
	for (i = 0, j = 9; i<j; i++, j--)
	{
		t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	return 0;
}
int empty(int arr[])//�������
{
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		arr[i] = 0;
	}
	return 0;
}
int init(int arr[])//�����ʼ�������鸳ֵ
{
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		arr[i] = i + 1;
	}
	return 0;
}
int main()
{
	int i = 0;
	int arr[10];
	empty(arr);
	for (i = 0; i<10; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	init(arr);
	for (i = 0; i<10; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	reverse(arr);
	for (i = 0; i<10; i++)
	{
		printf("%d  ", arr[i]);
	}

	return 0;
}






//5.ʵ��һ�������ж��Ƿ�������
#include<stdio.h>
#include<math.h>
int Judging_prime_number(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a = 0;
	int ret = 0;
	printf("������Ҫ�жϵ����֣�");
	scanf("%d", &a);
	ret = Judging_prime_number(a);
	if (ret = 1)
	{
		printf("%d������", a);
	}
	else
	{
		printf("%d��������", a);
	}
	return 0;
}