//1.根据输入创建乘法表
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
	printf("请输入：");
	scanf("%d", &n);
	Multiplication_table(n);

	return 0;
}


//2.用函数交换两个数的值
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


//3.实现一个函数判断是否是闰年
#include<stdio.h>
int Leap_year(int year)
{
	return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
int main()
{
	int year = 0;
	int ret = 0;
	printf("请输入需要判断的年份");
	scanf("%d", &year);
	ret = Leap_year(year);
	if (ret == 1)
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年");
	}
	return 0;
}



//4.创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
#include<stdio.h>
int reverse(int arr[])//用交换实现数组逆序
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
int empty(int arr[])//数组清空
{
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		arr[i] = 0;
	}
	return 0;
}
int init(int arr[])//数组初始化给数组赋值
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






//5.实现一个函数判断是否是素数
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
	printf("请输入要判断的数字：");
	scanf("%d", &a);
	ret = Judging_prime_number(a);
	if (ret = 1)
	{
		printf("%d是素数", a);
	}
	else
	{
		printf("%d不是素数", a);
	}
	return 0;
}