//bases.c ---以十进制，八进制，十六进制打印十进制数100

//原例题

/*
#include<stdio.h>
int main(void)
{
    int x =100;

    printf("dec = %d; octal = %o;hex = %x\n",x,x,x);
    printf("dec = %d; octal = %#o;hex = %#x\n",x,x,x);

    return 0;
}
*/

//加入获取输入
#include<stdio.h>
int main(void)
{
    int x;

    printf("请输入需要转换的数：");

    scanf("%d",&x);
        //第一个%d表示以十进制打印，第二个%o表示以八进制打印，第三个%x表示以十六进制打印
    printf("dec = %d; octal = %o;hex = %x\n",x,x,x);
        //#用于显示前缀
        //第一个%d表示以十进制打印，第二个%#o表示以八进制打印，第三个%#x表示以十六进制打印
    printf("dec = %d; octal = %#o;hex = %#x\n",x,x,x);

    return 0;
}