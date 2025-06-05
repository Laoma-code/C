//2-4.c  有错误的程序
#include<stdio.h>
int main(void)

//错误写法

//(                                       //要用花括号

//    int n, int n2,int n3;               //函数之间要用;隔开(int n;int n2;int n3;)，或者用int n,n2,n3;

//    /*该程序有多处错误                   //没有注释结束

//    n = 5;
//    n2 = n * n;
//    n3 = n2 * n2;                       //语义错误，后面输出的是你的3次方，但是这里是你的4次方，应该是n3=n2*n
//    printf("n = %d, n aquared = %d, n cubed = %d\n",n,n2,n3)         //后面少了;此处是想输出n，你的平方，你的三次方

//    return 0;
//)                                       //花括号

//正确写法
{
    int n;
    int n2;
    int n3;

    n = 5;
    n2 = n * n;
    n3 = n2 * n;

    printf("n = %d, n aquared = %d, n cubed = %d\n",n,n2,n3);

    return 0;

}