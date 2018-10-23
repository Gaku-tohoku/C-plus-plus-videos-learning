#include <stdio.h>

/*
void swap(int a, int b);          //int a_swap = 3, b_swap = 5
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
*/
void swap(int *a, int *b)         //int *a_swap = 0x8000, *b_swap = 0x9000
{
    int tmp;
    tmp = *a;             //去0x8000里面取数据，取一个int数据
    *a = *b;              //*a在左侧，表示左值，表示要把一个数赋到0x8000里面去。去0x9000里面取数据，取到5，赋值给0x8000这个内存单元。
    *b = tmp;
}
int main(void)
{
    int a = 3, b = 5;     //&a = 0x8000, &b = 0x9000
    printf("a=%d\tb=%d\n", a, b);
    //swap(a, b);        //3, 5    传值问题
    swap(&a, &b);        //&a, &b  传址问题
    printf("a=%d\tb=%d\n", a, b);
    return 0;
}
