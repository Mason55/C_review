#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
/*
 * 内存四区的模型，堆区（手动分配、释放）， 栈区（临时变量），
 *  全局区（系统管理）， 代码区(系统管理)
 *
*/
//静态区的项目

char * get_str1(){
    char * p1 = "i am p1";//分配在全局区上
    return p1;
}
char * get_str2(){
    char * p2 = "i am p1";
    return p2;
}

int main02()
{
    char *p1=NULL;
    char *p2=NULL;

    p1=get_str1();
    p2=get_str2();

    std::cout<<&p1<<"\t"<<&p2<<"\n";
    //输出结果：0x7ffc7c9f6e78	0x7ffc7c9f6e80

    return 0;
}

