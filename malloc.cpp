#include <stdio.h>
#include <stdlib.h>

/*
int main(void)
{
    int i;
    int *p = malloc(100);       //在堆上申请100字节
    
    for (i = 0; i < 25; i++)
        p[i] = i;
        
    for (i = 0; i < 25; i++)
        printf("%d\n", p[i]);  
        
    free(p);                   //如果没有释放p，会造成内存泄漏

    return 0;

}
*/

int main(void)
{
    char *s, *p;
    s = malloc(5);
    p = s;
    
    while ((*p = getchar()) != 'q')
    {
        putchar(*p);
        p++;
    }
    
    free(s);
    return 0;

}
