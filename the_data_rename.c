#include <stdio.h>

struct Teacher{
    char name[64];
    int sex;
};


typedef struct Teacher2{
    char name[64];
    int sex;
}Te;

int main(void)
{
    struct Teacher t1;
    Te t2;
    printf("Hello World!\n");
    return 0;
}

