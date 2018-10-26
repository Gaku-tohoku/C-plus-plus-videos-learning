#include <stdio.h>
#include <string.h>
/* 情况一
int main(void)
{
    char str[] = "hello world itcast good";
    char *p;
    
    p = strtok(str, " ");
    printf("%s\n", p);
    while ((p = strtok(NULL, " ")) != NULL)
        printf("%s\n", p); 
    
    
//    printf("str = %s\n", str);
    
    return 0;
}
*/

/*情况二
int main(void)
{
    char str[] = "hello, world, itcast! good.; night?";
    char *dlim = " ,?!.;";
    char *p;
    
    p = strtok(str, dlim);    //但凡出现空格或者逗号，都要替换成'\0',返回h的首地址。
    printf("%s\n", p);
    while ((p = strtok(NULL, dlim)) != NULL)
        printf("%s\n", p); 
    
    
//    printf("str = %s\n", str);
    
    return 0;
}
*/

//情况三
int main(void)
{
    char str[] = "hello world itcast good night";
    char tmp[] = "I am a student\n";
    char *dlim = " ";
    char *p;
    
    p = strtok(str, dlim);     //内部指针保存下一次要strtok的字符串地址
    printf("%s\n", p);
    
    p = strtok(tmp, dlim);    
    printf("%s\n", p);
    
    while ((p = strtok(NULL, dlim)) != NULL)
        printf("%s\n", p); 
    
    return 0;
}

