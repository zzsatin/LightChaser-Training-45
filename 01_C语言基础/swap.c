/*
 * swap.c -- 用指针交换两个变量的值
 * 功能: 输入两个整数，调用子函数交换后输出
 */
#define _CRT_SECURE_NO_WARNINGS   /* 让 MSVC 不再对 scanf 报安全警告 */
#include <stdio.h>

/* 参数是指针，函数内部改的就是主函数里的 x、y 本身 */
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("请输入两个整数: ");
    scanf("%d %d", &x, &y);   /* 两个 %d 之间用空格或回车隔开都行 */

    printf("交换前: x = %d, y = %d\n", x, y);
    swap(&x, &y);             /* 想改变实参，必须传地址 */
    printf("交换后: x = %d, y = %d\n", x, y);

    return 0;
}
