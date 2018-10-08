// 4.4.3 单分支选择应用举例
// 例：将输入的三个数按照从小到大的顺序输出 （三杯水交换）
#include <stdio.h>
void main()
{ float a,b,c,t;
  scanf("%f%f%f", &a, &b, &c);
  if(a>b){t=a; a=b; b=t;}
          /*得到a、b之间的较小值，存入a*/
  if(a>c){t=a; a=c; c=t;}
  if(b>c){t=b; b=c; c=t;}
  printf("%5.2f, %5.2f, %5.2f\n", a, b, c);
}
