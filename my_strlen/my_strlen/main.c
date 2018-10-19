
//递归和非递归分别实现strlen 
#include <stdio.h>
#include <assert.h>
int my_strlen(const char *str)//非递归
{
	int count = 0;
	assert(str != NULL);
	while (*str++)
	{
		count++;
	}
	return count;
}

int my_strlenR(const char *str)//递归
{
	assert(str != NULL);
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	return 0;
}

int main()
{
	char *str = "abcdefgh";
	int ret = my_strlen(str);
	printf("%d", ret);
	return 0;
}



