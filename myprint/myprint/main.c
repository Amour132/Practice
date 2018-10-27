//4.1.ģ��ʵ��printf���������������Ĺ��� 
//��������溯���ĵ��á� 
//print("s ccc d.\n","hello",'b','i','t'��100); 
//����ԭ�ͣ� 
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

