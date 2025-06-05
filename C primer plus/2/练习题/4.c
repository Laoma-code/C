#include<stdio.h>

void jolly();
void deny();

int main()
{
	jolly();
	jolly();
	jolly();
	deny();

	return 0;
}

void jolly()
{
	printf("for he's a jolly good fellow!\n");
}

void deny()
{
	printf("which nobady can deny!\n");
}