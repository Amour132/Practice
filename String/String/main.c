//1.实现strcpy 
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
//2.实现strcat 

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

//3.实现strstr 

char *my_strstr(char *dest, const char *str)
{
	char *cp = (char*)dest;
	char *cur = (char*)str;
	char *n = NULL;
	assert(dest != NULL);
	assert(str != NULL);
	if (*str == '\0')
	{
		return NULL;
	}
	while (*cp)
	{
		n = cp;
		cur = str;
		while (*n && *cur && (*n == *cur))
		{
			cur++;
			n++;
		}
		if (*cur == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}

//4.实现strchr

char *my_strchr(char *str, const char s)
{
	char *ret = str;
	assert(str != NULL);
	while (*ret)
	{
		if (*ret == s)
		{
			return ret;
		}
		ret++;
	}
	return NULL;
}

//5.实现strcmp 

int my_strcmp(const char *str1, const char *str2)
{
	int ret = 0;
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str1)
	{
		str1++;
		str2++;
	}
	return (ret);
}

//6.实现memcpy 
void *my_memcpy(void *dest, const void *str, int count)
{
	void *ret = dest;
	assert(dest != NULL);
	assert(str != NULL);
	while (count--)
	{
		*(char*)dest = *(char*)str;
		dest = (char*)dest + 1;
		str = (char*)str + 1;
	}
	return ret;
}


//7.实现memmove 
void *my_memmove(void *dest, const void *str, int count)
{
	void *ret = dest;
	assert(dest != NULL);
	assert(str != NULL);
	if (dest<str)
	{
		while (count--)
		{
			*(char*)dest = *(char*)str;
			dest = (char*)dest + 1;
			str = (char*)str + 1;
		}
	}
	else
	{
		dest = (char*)dest + count - 1;
		str = (char*)str + count - 1;
		while (count--)
		{
			*(char*)dest = *(char*)str;
			dest = (char*)dest - 1;
			str = (char*)str - 1;
		}
	}
	return ret;
}

int main()
{
	return 0;
}