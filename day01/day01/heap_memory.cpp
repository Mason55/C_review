#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
/*
 * 内存四区的模型，堆区（手动分配、释放）， 栈区（临时变量），
 *  全局区（系统管理）， 代码区(系统管理)
 *
 * C语言既可以在栈上分配内存，也可以在堆上分配内存
*/
//堆
char *get_num(int num){

    char *p1=NULL;
    p1=(char*)malloc(sizeof(char)*num);
    if(p1==NULL){
        return NULL;
    }
    return p1;

}
//栈
char* get_num2(int num){

    char buf[64];//！！这里分配的内存会同函数结束而消失
   /*
    *  buf的生长方向是向上的 ，栈的生长方向是不一定的。
    * */
    strcpy(buf,"jkdsljfklajg");
    return buf;//！！
}



int main03()
{
    char *tmp=NULL;
    int a=9;
    int b=10;
    tmp=get_num(10);
    if(tmp==NULL)
    {
        return 0;
    }
    strcpy(tmp,"136546");

    std::cout<<tmp<<"\t";
    //输出结果：0x7ffc7c9f6e78	0x7ffc7c9f6e80
    std::cout<<&a<<"  "<<&b;
    return 0;
}

