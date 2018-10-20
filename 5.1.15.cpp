# include<stdio.h>

char foo(int num)
{
    if (num >= 90)
        return 'A';
    if (num >=80 && num < 90)
        return 'B';
    if (num >= 60 && num < 80)
        return 'C';
    if (num < 60)
        return 'D';
}
void print_item(int num)         //3
{
    while (num--)
        printf("hello\n");
    return;
}
int main(void)
{
    int num;
    char score;
    while (1)
    {
        scanf("%d", &num, sizeof(num));
        score = foo(num);
        printf("%c\n", score);
    }
 
}