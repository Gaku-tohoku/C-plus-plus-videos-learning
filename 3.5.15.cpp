#include <stdio.h>

int main(void)
{
    putchar('a');
    putchar('b');
    putchar('c');
    putchar('\n');
    
    char ch = 'x';
    putchar(ch);
    
    ch = getchar();
    putchar(ch);
    
    getchar();
}