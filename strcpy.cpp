#include <stdio.h>
#include <string.h>
int main(void)
{
    //char dest[10];        //一定成功。
    //char *dest;           //可能运行成功，可能失败，有三种情况。dest是野指针，指向的区域没有可读可写空间。
    //char *dest = NULL;    //运行失败。0地址的内存属性，可读不可写。
    char dest[3];           //不安全，可能出现数组访问越界。目标数组应该足够大，大到能够保存下原数组的内容。
    
    char src[] = "hello";
    
    printf("%s\n", strcpy(dest, src));
    
    return 0;
}
