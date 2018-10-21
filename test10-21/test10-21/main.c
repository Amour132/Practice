#include <stdio.h>

//1.输出一个菱形
void diamond(int n)
{
	int a, b, c;
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= 6 - a; b++)
			printf(" ");
		for (c = 1; c<2 * a; c++)
			printf("*");
		printf("\n");
	}
	for (a = n - 1; a>0; a--)
	{
		for (b = 5; b >= a; b--)
			printf(" ");
		for (c = 1; c<2 * a; c++)
			printf("*");
		printf("\n");
	}
}

//2.求出0-999的水仙花数并输出
void Narcissistic_number()
{
	int a, b, c, d;
	printf("0-999的水仙花数有：\n");
	for (d = 0; d <= 999; d++)
	{
		a = d / 100;
		b = (d - 100 * a) / 10;
		c = d - 100 * a - 10 * b;
		if (d == a*a*a + b*b*b + c*c*c)
		printf("%d    ", d);
	}

}

//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
int Snadd(int n)
{
	int i = 0;
	int sum = n;
	int key = 0;
	for (i = 0; i<5; i++)
	{
		key = key * 10 + n;
		sum += key;
	}
	return sum;
}

int main()
{
	int n = 7;
	/*diamond(n);
	Narcissistic_number();*/
	/*int ret = Snadd(2);
	printf("%d ", ret);*/
	return 0;
}


