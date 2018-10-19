
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void init_array(int b[], int num)    // b是形参,形参接收实参赋值，b = a, b里面保存了数组a的首地址
{
    int i;
    srand(time(NULL));               //生成随机数种子，rand函数要根据此种子，再来生成随机数
    for (i = 0; i < num; i++)
        b[i] = rand() % 100;
}

void bubble_sort(int b[], int num)
{
}

void show_array(int b[], int num)
{
    int i;
    for (i = 0; i < num; i++)
        printf("%5d", b[i]);
    putchar('\n');
}

int main()
{
    int a[10];
    
    init_array(a, 10);     //a 表示数组首地址，称之为实参
    bubble_sort(a, 10);
    show_array(a, 10);
    
    return 0;
}
