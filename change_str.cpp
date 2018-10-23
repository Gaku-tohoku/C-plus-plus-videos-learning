#include <stdio.h>
#include <string.h>

void change_str(char *s)         //形参接受实参的赋值，s = 0x8000
{
    printf("sizeof(s)=%d\tstrlen(s)=%d\n", sizeof(s), strlen(s));    //s是char *，是用来存放地址的
    //*(s+3) = '\0';
}
int main(void)
{
    char str[10] = "hello";     //str = 0x8000
    change_str(str);
    //printf("%s\n", str);
    return 0;
}