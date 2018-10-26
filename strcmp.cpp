#include <stdio.h>
#include <string.h>
/*
int main(void)
{
    char *s1 = "hello";
    char s2[] = "good";
    
    int res;
    res = strcmp(s1, s2);
    printf("%d\n", res);
    return 0;
}
*/

int main(void)
{
    int i;
    char name[][10] = {"xiaoming", "itcast", "xiaoqiang", "xiaohong"};   //4行10列的一个二维数组;行数可以不用指明，列数要指明。
    char key[10];
    /*
    char a[10] = "xiaoming";       //name[0] 等价于 a
    char b[10] = "itcast";
    char c[10] = "xiaoqiang";
    char d[10] = "xiaohong";
    */

    for (i = 0; i < 4; i++)
    {
        if (strcmp(name[i], "xiaohong") == 0) {
            printf("%d\t%s\n", i, name[i]);
            strcpy(key, name[i]);
         }
    }
    printf("%s\n", key);   
     
    return 0;
}