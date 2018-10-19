#include <stdio.h>

int max(int a, int b)
{
    //if (a > b)
    // return a;
    printf("%p\t%p\n", &a, &b);
    return a > b ? a : b;       //问号冒号函数
}
int main(void)
{
    int c = 3, d = 5, res;      //result接收函数的返回值
    printf("%p\t%p\n", &c, &d);
    res = max(c, d);
    printf("%d\n", res)#include <stdio.h>

int max(int a, int b)
{
    //if (a > b)
    // return a;
    printf("%p\t%p\n", &a, &b);
    return a > b ? a : b;       //问号冒号函数
}
int main(void)
{
    int c = 3, d = 5, res;      //result接收函数的返回值
    printf("%p\t%p\n", &c, &d);
    res = max(c, d);
    printf("%d\n", res);        //printf接收%d，接收结果
    getchar();
} ;        //printf接收%d，接收结果
    getchar();
} 