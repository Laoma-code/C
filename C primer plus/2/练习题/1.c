#include<stdio.h>
//简单写法

/*
int main(void)
{
	printf("马启荣\n");
	printf("马\n启荣\n");
	printf("马");
	printf("启荣");

	return 0;

}
*/


// 调用自定义函数写法


void k(void);
void q(void);
int main(void)
{
	//printf("马启荣");//一行打印名和姓
	q();
	//printf("\n");
	k();
	//printf("\n");
	q();
	//printf("\n");
	return 0;
}


void k(void)
{
	printf("马\n启荣\n");

}

void q(void)
{
	printf("马启荣\n");
	//printf("启荣");

}
