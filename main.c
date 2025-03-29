// 我的计算器项目
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_head.h"
#include <math.h>
/*
定义输入的数
typedef struct {
	double num1;
	double num2;
}input;
*/
int main()
{
	char mode;
	input user_input;
	int status;

	// 用户输入计算模式
	do
	{
		status = getUserInput(&user_input.num1, &user_input.num2, mode);
		if (status == INVALID_MODE)
		{
			printf("无效的操作符!请重新输入\n\n");
			continue;
		}

		// 模式执行
		double output;
		switch (mode)
		{
		case '+':
			status = add(user_input.num1, user_input.num2, &output);
			break;
		case '-':
			status = subtract(user_input.num1, user_input.num2, &output);
			break;
		case '*':
			status = multiply(user_input.num1, user_input.num2, &output);
			break;
		case '/':
			status = divide(user_input.num1, user_input.num2, &output);
			break;
		case '^':
			status = power(user_input.num1, user_input.num2, &output);
		case 's':
			status = sinFunction(user_input.num1, user_input.num2, &output);
		case 'c':
			status = cosFunction(user_input.num1, user_input.num2, &output);
		}
		if (status == DIVIDE_BY_ZERO)
		{
			printf("除数不能为0!请重新输入\n\n");
			continue; // 除法错误输出1
		}

		// 输出运算结果
		printf("运算结果是：%g\n", output);

		// 询问是否进行下次运算
		printf("是否进行下次运算？（Y/N）\n\n");
		char cont;
		scanf(" %c", &cont);
		if (cont == 'n' || cont == 'N')
		{
			break;
		}

	} while (1);

	return SUCCESS;
}
