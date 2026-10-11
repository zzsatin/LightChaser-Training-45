#include <stdio.h>

int main()
{
    int a[10], i, j, t;
    int low, high, mid;
    int target = 0;     
    int found = 0;      

    printf("请输入10个整数: ");
    for (i = 0; i < 10; i++)
    {
        if (scanf("%d", &a[i]) != 1)
        {
            printf("输入无效\n");
            return 1;
        }
    }

    
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("排序后的数组为: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n请输入要查找的数字: ");
    if (scanf("%d", &target) != 1)
    {
        printf("输入无效\n");
        return 1;
    }

    /* 二分查找: 每轮都要重新算 mid，循环里只判断"相等就找到" */
    low = 0;
    high = 9;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == target)
        {
            found = 1;
            break;    
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    /* "没找到"只能在循环结束后判断 */
    if (found)
    {
        printf("找到了,下标为: %d\n", mid);
    }
    else
    {
        printf("没有找到\n");
    }

    return 0;
}
