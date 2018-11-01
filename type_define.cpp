#include <stdio.h>
//1.利用typedef封装数据类型
//2.利用typedef简化函数指针定义

//typedef ssize_t int;
//typedef ssize_t long long;           //type_define的优点在于便于修改，只需要修改这一行，不用动其它代码。

ssize_t mystrlen(char *str)
{
}
int main(void)
{
    char *s = "hello";
    
    printf("%d\n", mystrlen(s));
    
    return 0;
}






typedef char* NEWTYPE;
int main(void)
{
    NEWTYPE p1, p2, p3;        //这里NEWTYPE表示定义的p1,p2,p3都是char *类型。相当于char *p1, *p2, *p3; 这里是三个指针。

}


/*
#define NEWTYPE char*
int main(void)
{
    NEWTYPE p1, p2, p3;       //char* p1, p2, p3; p1是一个指针，p2，p3是字符类型，是字符变量。

}
*/
