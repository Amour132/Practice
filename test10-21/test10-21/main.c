#include <stdio.h>

//1.���һ������
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

//2.���0-999��ˮ�ɻ��������
void Narcissistic_number()
{
	int a, b, c, d;
	printf("0-999��ˮ�ɻ����У�\n");
	for (d = 0; d <= 999; d++)
	{
		a = d / 100;
		b = (d - 100 * a) / 10;
		c = d - 100 * a - 10 * b;
		if (d == a*a*a + b*b*b + c*c*c)
		printf("%d    ", d);
	}

}

//3.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
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


