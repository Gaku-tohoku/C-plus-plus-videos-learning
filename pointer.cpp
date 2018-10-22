#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
#include <string.h>

/*  指针
 int main(void)
{
    int i = 3;
    int *p;
    p = &i;
    printf("&i = %p\n", &i);
    printf("p = %p\t*p=%d\n", p, *p);
    return 0;
}
*/

/* 生成随机数
//void init_array(int arr[], int n) //arr = a
void init_array(int *arr, int n) //arr = a
{
    int i;
    //arr[3] = 5;            //*(arr+3) = 5;
    //srand(1);                //srand(time(NULL))
    srand(time(NULL));
    for(i = 0; i < n; i++)
        arr[i] = rand() % 10;
}
void show_array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    putchar('\n');
}
int main(void)
{
    int a[10];
    init_array(a, 10);
    show_array(a, 10);
    return 0;
}
 
 */

int main(void)
{
    char str[] = "helloworld";
    printf("sizeof(str)=%d\nstrlen(str)=%d\n%s\n", sizeof(str), strlen(str), str);
    
    printf("**************\n ");
    char *p = str;
    while (*p != '\0')
    {
        putchar(*p);
        p++;    //地址+1就是指向下一个字符的地址
    }
    return 0;
 
}
