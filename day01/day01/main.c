#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*********
 * 数组做参数退化问题
 * 实参是数组;形参是指针
 * ***************/



//打印数组
//数组做函数参数注意两点:
//1.传递数组的首地址
//2.传递数组的有效长度
void printArray(int*a,int num)
{
    //int*a;int num;
    int i=0;
    for(i=0;i<num;i++)
    {
        printf("a[%d]:%d\t",i,a[i]);
    }
}

void sortArray(int * a,int num)
{
    int i=0,j=0;
    for(i=0;i<num;i++)
    {
        //第一种冒泡法排序,a[i]在内层循环中是固定的,
        //a[j]通过与固定位置的a[i]比较交换位置
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
                //只使用两个变量完成交换
            }
        }
        //不同在于j的初始位置的不同

        //        for(j=i+1;j>num;j++)
        //        {
        //            if(a[i]<a[j])
        //            {
        //                a[i]=a[i]+a[j];
        //                a[j]=a[i]-a[j];
        //                a[i]=a[i]-a[j];
        //            }
        //        }
    }
}

int main()
{
    //int i = 0,j=0;
    int a[]={23,56,89,74,51,87,852,441,54};

    int num=0;
    num=sizeof(a)/sizeof(a[0]);

    printArray(a,num);//这里传进来的数组退化了,

    printf("\n");

    sortArray(a,num);//a就是一个地址


    printf("after the sort\n");

    printArray(a,num);

    return 0;

}

