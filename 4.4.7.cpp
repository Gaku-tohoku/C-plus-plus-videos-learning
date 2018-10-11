#include <stdio.h>

int main(void)
{
    int num = 10;
    if (4 > 10)
        printf("000000\n");
    else if (4 > 2)
        printf("0222222200000\n");
    else if (num = 3)              //这行代码已经被短路掉了。
        printf("33333330\n");
    else
        printf("4444444444\n");
        
    if (4 > 10)
        printf("000000\n");
    if (4 > 2)
        printf("0222222200000\n");
    if (num = 3)             
        printf("33333330\n");
    else
        printf("4444444444\n");
        
    printf("%d\n", num);
}