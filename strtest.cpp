#include <stdio.h>

int main(void)
{
    //char str[5] = "hello";
    char str[] = "hello";
    printf("%d\n", sizeof(str));
    //char str1[10] = "hello";
    //char str1[10] = {'h', 'e', 'l', 'l', 'o'};      //相当于 int a[5] = {1,2,3,4,5}
    
    printf("%s", str);
    //printf("%s", str1);
    getchar();
}