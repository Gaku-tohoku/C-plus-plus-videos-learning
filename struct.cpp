#include <stdio.h>
struct STU {
    int id;
    char name[20];
    char sex;
};

int main(void)
{
    struct STU a = {10, "xy", 'm'};
    printf("%p\t%d\n", &a.id, a.id);
    printf("%p\t%s\n", a.name, a.name);
    printf("%p\t%c\n", &a.sex, a.sex);
    return 0;
}