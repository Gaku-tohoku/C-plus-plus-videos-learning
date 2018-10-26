#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char str[] = "hello world itcast";
    //char key = 'o';          //要去找字符 'o'
    char key;
    printf("%s\n", str);
    key = getchar();
    char *p = NULL;          //指针变量去接收char *p,首先让它等于NULL，防止野指针的出现。
    p = strchr(str, key);    //去str里面找key，p是接收返回地址。
    /*
    //if (p == NULL)
    if (!p)
        printf("un find\n");
    else
        printf("%s\n", p);       //printf打印p
    */
    (!p)?printf("un find\n"):printf("%s\n", p);
    return 0; 
} 