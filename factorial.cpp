#include <stdio.h>

//  5!  =>  5 * 4 * 3 * 2 * 1 => 5 * (4!)
//  4!  =>  4 * (3!)
//  3!  =>  3 * (2!)
//  2!  =>  2 * (1!)
//  1!  =>  1 * (0!)
//  0!  =>  1

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}
int main(void)
{
    int n, res;
    scanf("%d", &n);
    res = factorial(n);
    printf("%d\n", res);
    return 0; 
}