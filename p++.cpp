#include <stdio.h>

/*
int main(void)
{
    int arr[] = {1, 2, 3, 4};
    int *p = arr;
    
    //int a = *p++;  //等价于a = *(p++); 即a = *p; p = p + 1;
    
    int b = *++p;  //等价于b = *(++p); 即p = p + 1; b = *p
    
    //printf("a = %d, b = %d\n", a, b);
    
    printf("b = %d\n", b);
    
    return 0;
}
*/

int main(void)
{
    int a = 0;
//    int b = (++a)+(++a)+(++a);
//    int b = (a++)+(a++)+(a++);
//    int b = a++;
    int b = (a++)+(a++);
    printf("b = %d\n", b);
    return 0;
}