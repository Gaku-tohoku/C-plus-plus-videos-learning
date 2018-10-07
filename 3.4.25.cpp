#include <stdio.h>

int main(void)
{
    int a = 3;
    if (a > 0)
        a += 2;
    else
        a--;
        
    printf("%d\n", a);
    
    getchar();
}