#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i = 0,j=0;
    int a[]={23,56,89,74,51};
    for(i=0;i<5;i++)
    {
        printf("a[%d]:%d\t",i,a[i]);
    }
    printf("\n");

    for(i=0;i<5;i++)
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

//        for(j=i+1;j<5;j++)
//        {
//            if(a[i]<a[j])
//            {
//                a[i]=a[i]+a[j];
//                a[j]=a[i]-a[j];
//                a[i]=a[i]-a[j];
//            }
//        }
    }
    printf("after the sort\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]:%d\t",i,a[i]);
    }


    return 0;
}

