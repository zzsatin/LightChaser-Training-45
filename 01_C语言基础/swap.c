#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
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
    scanf("%d %d", &x, &y);
    printf("交换前: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("交换后: x = %d, y = %d\n", x, y);
    return 0;
}