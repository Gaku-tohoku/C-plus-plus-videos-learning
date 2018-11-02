#include <stdio.h>
char stack[512] = {0};      //数据栈
int top = 0;                //栈指针

void push(char ch)
{
    stack[top++] = ch;
}
char pop(void)
{
    return stack[--top];
}
int is_empty(void)
{
    return top == 0;
}
int is_full(void)
{
    return top == 512;
}


int main(void)          //字符串逆序
{
    char *str = "abcde";
    
    while (*str != '\0') {
        push(*str);
        str++;
    }
    while (is_empty() == 0)
        putchar(pop());
    putchar('\n');
    
    return 0;
}
