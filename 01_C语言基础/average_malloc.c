#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;
    double *a, sum = 0.0;

    printf("请输入元素个数:");
    if (scanf("%d", &n) != 1 || n <= 0)          // 个数必须是正整数
    {
        printf("输入无效\n");
        return 1;
    }

    a = (double *)malloc(n * sizeof(double));    //按 n 动态申请数组 
    if (a == NULL)                               // 申请失败要判断，不能直接用
    {
        printf("内存申请失败\n");
        return 1;
    }

    printf("请输入 %d 个数字:", n);
    for (i = 0; i < n; i++)
    {
        if (scanf("%lf", &a[i]) != 1)            // 读到一半失败也要先释放再退出
        {
            printf("输入无效\n");
            free(a);
            return 1;
        }
        sum += a[i];                            // 边读边累加 
    }

    printf("平均值 = %.2f\n", sum / n);

    free(a);                                     // 用完释放，避免内存泄漏 
    a = NULL;                                   // 置空，防止野指针 

    return 0;
}
