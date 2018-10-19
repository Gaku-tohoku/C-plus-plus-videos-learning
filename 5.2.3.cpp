#include <stdio.h>

int main(void)
{
    int a[10];
    int b = 3;
    
    printf("%p\t%p\t%p\n", &a[0], a, &a);
    printf("%d\t%p\n", b, &b);

}