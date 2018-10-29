#include <stdio.h>

int add(int a, int b)
{
    printf("%d\t%d\n", a, b);      //打印a，b的值
    return a+b;                    //返回a和b的和
}
char max_ch(char *str)
{
    int max, i;
    max = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] > str[max])
            max = i;
            
    return str[max];
}
int main(void)
{
    int res;
    int (*p)(int, int);
    p = add;
    res = p(3, 5);
    //res = add(3, 5);
    printf("%d\n", res);
    return 0;
    
    char (*q)(char *);
    q = max_ch;
    printf("%c\n", q("hello"));
}