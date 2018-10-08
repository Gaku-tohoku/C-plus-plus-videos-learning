#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 1.0, b = 2.0, c = 3.0;
    double result;
    
    result = a + b + c;
    printf("%f\n", result);
    
    result = a*a + b*b + c*c;
    printf("%f\n", result);
    
    result = sqrt(result);
    printf("%f\n", result);
    
    getchar();

}