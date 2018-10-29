#include <stdio.h>

int main(void)
{
    char *p[10];
    printf("%d\t%d\n", sizeof(p), sizeof(*p));   //sizeof(p)取出来的是一个数组, sizeof(*p))取出来的是一个指针
    return 0; 
}