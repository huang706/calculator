#ifndef MY_HEAD_H
#define MY_HEAD_H

// 定义错误代码
typedef enum
{
	SUCCESS = 0,
	INVALID_MODE = -1,
	DIVIDE_BY_ZERO = -2,
} errorCode;

// 定义输入函数
errorCode getUserInput(double *a, double *b, char mode);

// 定义运算函数
errorCode add(double a, double b, double *result);
errorCode subtract(double a, double b, double *result);
errorCode multiply(double a, double b, double *result);
errorCode divide(double a, double b, double *result);
errorCode power(double a, double b, double *result);
errorCode sinFunction(double a, double b, double *result);
errorCode cosFunction(double a, double b, double *result);

// 定义输入的数
typedef struct
{
	double num1;
	double num2;
} input;

#endif
