//1.ʹ��main�����Ĳ�����ʵ��һ��������������
//������Խ���������������һ��������-a��ѡ��ִ�мӷ���
//��-s��ѡ��ִ�м�������-m��ѡ��ִ�г˷�����-d��ѡ��ִ�г�����
//������������Ϊ�������� 
//���磺�����в������룺test.exe -a 1 2 
//ִ��1+2���3 

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
			printf("�ڶ�����������\n");
			break;
		}
	}
	else
		printf("�������\n");
	printf("ret = %d\n", ret);
	return 0;
}
