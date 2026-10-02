#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>

// 参数是指针，函数内部改的就是主函数里的 x、y 本身 
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
    swap(&x, &y);             // 想改变实参，必须传地址
    printf("交换后: x = %d, y = %d\n", x, y);

    return 0;
}
