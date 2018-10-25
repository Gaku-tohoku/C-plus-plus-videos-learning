#include <stdio.h>

int main(void)
{
    /*
    const int a = 3;
    const int b;
    b = 3;
    a = 5;
    */
    const char *s = "hello";
//    *(s+3) = 'H';       //要修改里面的值,会报错，read-only variable，*s所指向的值不能改。也就是说，const修饰过的字符串，里面的内容不能修改。
    s = s+1;        //s的地址可以改变。
    printf("%s\n", s);
    return 0;    
}
