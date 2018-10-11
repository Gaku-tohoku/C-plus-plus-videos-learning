#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    
    switch (num) {                 //switch里面只能是整型，只能是char short int long
    case 10:                       //case的本质是标号，标号实际上就是一个地址。标号代表离它最近的下一条指令的地址。
        printf("aaaaaaaaaa\n");
        break;                     //跳出语句块
    case 20:
        printf("bbbbbbbbbb\n");
        break;
    case 30:
        printf("cccccccccc\n");
        break;
    case 50:
        printf("dddddddddd\n");
        break;
    default:
        printf("helloworld\n");
    }
}
