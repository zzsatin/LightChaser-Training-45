/*
 * sum.c -- 循环累加
 * 功能: 求 1 到 100 之间所有奇数的和
 */
#include <stdio.h>

int main()
{
    int sum = 0;

    /* 从 1 开始、每次加 2，正好遍历所有奇数 */
    for (int i = 1; i <= 100; i += 2)
    {
        sum += i;
    }

    printf("1到100的奇数和为: %d\n", sum);

    return 0;
}
