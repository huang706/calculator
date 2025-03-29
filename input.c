#include "my_head.h"
errorCode getUserInput(double *a, double *b, char mode)
{

	// 获取计算模式
	printf("请输入你的计算模式\n");
	printf("加法:+\n减法:-\n乘法:*\n除法:/\n幂运算：^\n正弦：s\n余弦:c\n");
	scanf(" %c", mode);
	if (mode != '+' && mode != '-' && mode != '*' && mode != '/' && mode != '^' && mode != 's' && mode != 'c')
	{
		return INVALID_MODE; // 输入模式错误返回-1
	}

	// 用户输入操作对象
	printf("请输入第一个数：");
	scanf(" %lf", a);
	printf("请输入第二个数：");
	scanf(" %lf", b);

	return SUCCESS;
}
