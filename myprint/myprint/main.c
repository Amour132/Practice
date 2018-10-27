//4.1.模拟实现printf函数，可完成下面的功能 
//能完成下面函数的调用。 
//print("s ccc d.\n","hello",'b','i','t'，100); 
//函数原型： 
//print(char *format, ...) 
#include <stdio.h>
#include <stdarg.h>
void print(char *format, ...)
{
	int num = 0;
	va_list arg;
	va_start(arg, format);
	while (*format)
	{
		if (*format == 'c')
		{
			printf("%c", va_arg(arg, char));
			printf("\n");
		}
		else if (*format == 's')
		{
			printf("%s\n", va_arg(arg, char*));
		}
		else if (*format == 'd')
		{
			num = va_arg(arg, int);
			printf("%d", num);
		}
		format++;
	}
	va_end(arg);
}
int main()
{
	print("s ccc d.\n", "hello", 'b', 'i', 't', 100);
	return 0;
}

