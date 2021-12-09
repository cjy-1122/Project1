#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>				//编译预处理指令
//int main()
//{
//	printf("This is a C program.\n");		//输出所指定的一行信息
//	return 0;
//}


#include <stdio.h>
int main()
{
	int a, b, sum;		//程序的声明部分，定义a,b,sum为整形变量
	a = 19;
	b = 20;
	sum = a + b;
	printf("sum = %d\n",sum);
	return 0;
}

