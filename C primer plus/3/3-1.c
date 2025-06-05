#include<stdio.h>
int main(void)
{
        float weight;  //你的体重
        float value;   //相等重量的白金价值

        printf("Are you worth your weight in platiunm?\n");
        printf("Let's check it out.\n");
        printf("olease enter your weight in pounds:");

        scanf("%f",&weight); //地址符号，取地址， 吧用户输入的值，赋给变量weight

        value = 1700.0 * weight *14.5833;
        printf("Your wight in platinum is worth $%.2f.\n",value);//.2f表示小数点后取两位
        printf("you are easily worth that! if platinum prices drop,\n");
        printf("eat more to maintain your valur.\n");

        return 0;


}
