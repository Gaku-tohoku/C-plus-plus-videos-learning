#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello world itcast"; 
    char *keyword = "or";    
    char *p;                             //接收结果
    p = strstr(str, keyword);            //找子串
    printf("%s\n", p);
    return 0;
}