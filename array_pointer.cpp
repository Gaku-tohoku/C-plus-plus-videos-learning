#include <stdio.h>

int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    //int *p;
    int (*p)[10];     //先算小括号，p和*结合，属于指针类型，指针指向拥有10个int型元素的数组
    
    printf("%d\t%d\n", sizeof(p), sizeof(*p));     //p表示指针，1个地址，*p表示去这里地址里取内容。
    return 0;
}