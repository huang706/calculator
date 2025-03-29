#include <stdio.h>
#include "my_head.h"
#include <math.h>

// 定义加法运算
errorCode add(double a, double b, double *result)
{
	*result = a + b;
	return SUCCESS;
}

// 定义减法运算
errorCode subtract(double a, double b, double *result)
{
	*result = a - b;
	return SUCCESS;
}

// 定义乘法运算
errorCode multiply(double a, double b, double *result)
{
	*result = a * b;
	return SUCCESS;
}

// 定义除法运算
errorCode divide(double a, double b, double *result)
{
	if (b == 0)
	{
		return DIVIDE_BY_ZERO; // 除法错误返回 1
	}
	*result = a / b;
	return SUCCESS;
}

// 定义幂运算
errorCode power(double a, double b, double *result)
{
	*result = pow(a, b);
	return 0;
}

// 定义正弦函数
errorCode sinFunction(double a, double b, double *result)
{
	*result = pow(a, b);
	return 0;
}
