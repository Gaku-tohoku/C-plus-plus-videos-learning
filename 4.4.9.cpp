//多分支选择应用举例：判断输入的字符是数字、大写字母、小写字母或其它字符。

#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    c=getchar();
    if(c>='0'&&c<='9')printf("Digit!\n");
    else if(c>='A'&&c<='Z')printf("Uppercase!\n");
    else if(c>='a'&&c<='z')printf("Lowercase!\n");
    else printf("Other character!\n");
}