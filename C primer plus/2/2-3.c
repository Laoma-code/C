/*2-3.c   一个文件包含两个函数*/
#include <stdio.h>
void butler(void);     //ANSI/ISO  C函数原型
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();           //调用自定义函数
    printf("Yes,bring me some tea and writeable DVDs.\n");

    return 0;
}
void butler(void)       //函数自定义开始
{
    printf("You rang,sir?\n");
}