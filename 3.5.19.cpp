#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //int a = 3;
    //printf("%p\t%d\n", &a, a);
    //scanf("%d", &a);
    //printf("%d\n", a);
    
    
    //int a, b;
    //scanf("%dhello%d", &a, &b);
    //printf("%d\t%d\n", a, b);
    
    int a;
    char b;
    int c;
    //scanf("%c", &b);
    //printf("%c\n", b);
    
    //scanf("%d%c%d", &a, &b, &c);       //10 x 20   ⇒  a(10) b('') c(接收整数失败，出错返回)
    printf("请按此格式输入：\n十进制，字符，十进制\n");
    scanf("%d,%c,%d", &a, &b, &c);       //如果使用scanf函数同时接收整型和字符类型，需要加分隔符，如逗号，用scanf要有友好的提示。
    printf("%d\t%c\t%d\n", a, b, c);
}
