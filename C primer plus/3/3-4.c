#include<stdio.h>

int main(void)
{
    //3000000000在unsigned int（0-2147483647*2）范围内，但不在int（-2147483648-2147483647）范围内
    unsigned int un = 3000000000;//int为32位和short为16位的系统
    //short<int(小范围可以用大范围显示)
    short end = 200;
    long big = 65537;
    long long verybing = 12345678908642;


    
    //sizeof（）运算符，作用是计算整数类型的大小，单位是字节，
    //short   2 byte = 16 bit(可以存储2位，2*8=16字节)
    printf("int size =%d\n",sizeof(short));
    //int     4 byte =32
    printf("int size =%d\n",sizeof(int));
    //long    4 byte = 32
    printf("int size =%d\n",sizeof(long));
    //long long 8 byte = 64
    printf("int size =%d\n",sizeof(long long));

    printf("un = %u and not %d\n",un ,un);
    printf("end = %hd and %d\n",end,end);
    printf("big = %ld and not %hd\n",big,big);
    printf("verybig = %lld and not %ld\n",verybing,verybing);

    return 0;
}