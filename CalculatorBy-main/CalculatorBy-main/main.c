//1.使用main函数的参数，实现一个整数计算器，
//程序可以接受三个参数，第一个参数“-a”选项执行加法，
//“-s”选项执行减法，“-m”选项执行乘法，“-d”选项执行除法，
//后面两个参数为操作数。 
//例如：命令行参数输入：test.exe -a 1 2 
//执行1+2输出3 

#include <stdio.h>  
#include <string.h>    
#include <stdlib.h>    
int main(int argc, char* argv[])
{
	int ret = 0;
	if (argv[1][0] == '-')
	{
		switch (argv[1][1])
		{
		case 'a':
		{
					ret = (atoi(argv[2])) + (atoi(argv[3]));
		}
			break;
		case 's':
		{
					ret = (atoi(argv[2])) - (atoi(argv[3]));
		}
			break;
		case 'm':
		{
					ret = (atoi(argv[2])) * (atoi(argv[3]));
		}
			break;
		case 'd':
		{
					ret = (atoi(argv[2])) / (atoi(argv[3]));
		}
			break;
		default:
			printf("第二个参数有误\n");
			break;
		}
	}
	else
		printf("输入错误\n");
	printf("ret = %d\n", ret);
	return 0;
}
