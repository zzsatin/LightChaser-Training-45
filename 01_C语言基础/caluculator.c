/*
 * caluculator.c -- 四则运算计算器
 * 功能: 依次输入两个数和一个运算符，输出计算结果
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    char op;

    printf("请按照格式输入计算表达式: 数字 运算符 数字\n");
    printf("请输入第一个数: \n");
    scanf("%f", &a);
    printf("请输入运算符: \n");
    scanf(" %c", &op);   /* %c 前的空格很关键，用来跳过上次输入留下的回车符 */
    printf("请输入第二个数: \n");
    scanf("%f", &b);

    switch (op)          /* 按运算符跳到对应分支 */
    {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)   /* 除法要先判断除数，不能除以 0 */
            {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            else
            {
                printf("错误：除数不能为零\n");
            }
            break;
        default:          /* 输入了 +-*/ 以外的字符 */
            printf("错误：不支持的运算符\n");
            break;
    }

    return 0;
}
