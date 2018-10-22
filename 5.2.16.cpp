#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
void init_array(int a[], int n)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++)
        a[i] = rand() % 100;
}
void select_sort(int a[], int n)
{
    int i, min, j, tmp;
    for (i = 0; i < n; i++)
    {
        min = i;    //a[i]
        for (j = i+1; j < n; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}
void show_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    putchar('\n');
}
int main(void)
{
    //1.初始化一个数组
    int arr[N];
    init_array(arr, N);
    //2.选择排序此数组，升序排序
    select_sort(arr, N);
    //3.打印输出此数组的值
    show_array(arr, N);
    return 0;
}
