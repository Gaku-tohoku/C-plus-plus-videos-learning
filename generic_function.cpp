#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void show_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    putchar('\n');
}
void init_array(int a[], int n)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++)
        a[i] = rand() % 100;
}
int cmp_int(void *a, void *b)
{
    int x = *((int *)a);         //a本来是void *里的地址，把它强制转换成int型的地址，再取*取它的内容。
    int y = *((int *)b);
    return x > y;                //返回值只可能是两种情况，0或1，1表示真，0表示假。
}
void swap_int(void *a, void *b)
{
    int tmp;                     //3杯水交换
    tmp = *((int *)a);           //本身是void类型。void类型我们称之为空，也称为散型，这种类型最弱。void类型遇到哪种类型就会自动变成哪种类型。 
    *((int *)a) = *((int *)b);
    *((int *)b) = tmp;
}
void bubble_sort(void *a, int n, int(*cmp)(void *, void *), void (*swap)(void *, void *))      //bubble_sort的后面两个参数都是函数指针，cmp用来比较，swap用来交换。
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n-i-1; j++)
            if (cmp((void *)((int *)a+j), (void *)((int *)a+j+1)) > 0)      //用(void *)进行强制类型转换
                swap((void *)((int *)a+j), (void *)((int *)a+j+1));
}
int main(void)
{
    int a[10];
    init_array(a, 10);
    show_array(a, 10);
    bubble_sort(a, 10, cmp_int, swap_int);   
    show_array(a, 10); 
}