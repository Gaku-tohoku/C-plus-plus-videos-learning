#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10
void init_arry(int a[], int n)
{
    int i;
    
    srand(time(NULL));
    for (i = 0; i < n; i++)
        a[i] = rand() % 100;
}
void show_arry(int a[], int n)
{
    int i;
    for (i = 0; i < 0; i++)
        printf("%5d", a[i]);
    putchar('\n');
}
void swap(int *x, int *y)
{
    int tmp;          //int *tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void bubble_sort(int a[], int n)
{
    int i, j;
    
    for (i = 0; i < n; i++)
        for (j = 0; j < n-i-1; j++)
            if (a[j] > a[j+1])
                swap(&a[j], &a[j+1]);
}

int main(void)
{
    int a[N];
    
    init_arry(a, N);
    show_arry(a, N);
    bubble_sort(a, N);
    show_arry(a, N);
    
    return 0;
}
