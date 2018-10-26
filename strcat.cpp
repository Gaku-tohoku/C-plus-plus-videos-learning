#include <stdio.h>
#include <string.h>
int main(void)
{
    //char s1[10] = "hello";     //运行成功
    //char *s1 = "hello";        //运行失败
    char s1[] = "hello";         //可能运行成功，可能运行失败，有数组访问越界的风险，危险的代码。
    char s2[] = "BOY";
    
    strcat(s1, s2);
    
    printf("%s\n", s1);
    
    return 0;
}