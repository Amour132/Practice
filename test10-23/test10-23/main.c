//1.一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。 
// 找出这两个数字，编程实现。 
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	for (i = 0; i<sz; i++)
	{
		int k = 0;
		for (j = 0; j<sz; j++)
		{
			if (arr[i] == arr[j])
			{
				k++;
			}
		}
		if (k == 1)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
	int i = 0;
	int record = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	int a = 0;
	int b = 0;
	for (i = 0; i<sz; i++)
	{
		ret ^= arr[i];
	}
	for (i = 0; i<32; i++)
	{
		if (((ret >> 1) & 1) == 1)
		{
			record = i;
			break;
		}
	}
	for (i = 0; i<sz; i++)
	{
		if (((arr[i] >> record) & 1) == 1)
		{
			a ^= arr[i];
		}
	}
	b = a ^ ret;
	printf("%d  %d", a, b);

	return 0;
}


//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。编程实现。
#include <stdio.h>
int my_math(int money)
{
	int count = money;
	while (money>1)
	{
		count += money / 2;
		money = money / 2 + money % 2;
	}
	return count;
}
int main()
{
	int money = 20;
	int ret = 0;
	ret = my_math(money);
	printf("可以买%d 瓶汽水\n", ret);
	return 0;
}


//3.实现strcpy 
#include <stdio.h>
#include <assert.h>
char *my_strcpy(char *dest, const char *str)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(str != NULL);
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char *arr2 = "Hello world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}

//4.实现strcat 
#include <stdio.h>
#include <assert.h>
char *my_strcat(char *dest, const char *str)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(str != NULL);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "Hello ";
	char *arr2 = "world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}