#include <stdio.h>

int main(void)
{
//    char *str2 = "hello";     //"hello"属于字符串常量，储存在只读数据区。
    char str2[] = "hello";      //str2[6]; 内存的栈上分配，栈的属性可读可写。
    *str2 = 'H';
    printf("%s\n", str2);
    
    return 0;
}