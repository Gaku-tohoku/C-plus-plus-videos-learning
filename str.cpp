#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10] = "hello";
    printf("sizeof(str)=%d\tstrlen(str)=%d\n\n", sizeof(str), strlen(str));
    return 0;
}