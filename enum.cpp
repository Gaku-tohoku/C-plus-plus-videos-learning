#include <stdio.h>

enum ITEM {RED, BLACK, BLUE, WHITE=20, GREEN};

int main(void)
{
    enum ITEM c1;
    
    c1 = BLACK;
    printf("%d\n", c1);
    
    return 0;
}
