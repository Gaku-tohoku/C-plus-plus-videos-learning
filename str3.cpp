#include <stdio.h>

int main(void)
{
    //char arr[10] = "hello";
    char *arr = "hello";
    while (*arr != '\0')
        putchar(*arr++);   //arr = arr+1; 因为arr[10]是一个数组首地址，地址是一个常量，不能做左值，所以会报错。*arr是一个指针变量，可以做左值。
    //指针可以做++，--的操作；数组名不可以做++，--的操作。因为数组名本质只是一个地址常量。
    return 0;

}