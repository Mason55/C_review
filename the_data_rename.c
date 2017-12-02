#include <stdio.h>

struct Teacher{
    char name[64];
    int sex;
};

typedef struct Teacher2{
    char name[64];
    int sex;
}Teacher2;//把这个结构体重新定义为数据类型Teacher2

//这里就是针对数据类型进行了重命名

int main(void)
{
    Teacher t1;//这个是不对的,前面要有struct
    Teacher2 t2;//这个就可以认为是一种数据类型了
    printf("Hello World!\n");
    return 0;
}