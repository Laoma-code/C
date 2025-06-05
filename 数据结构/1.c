#include<stdio.h>

int main()
{
    loveyou(100);

    return 0;
}


int loveyou(int n){
    int i = 0;
    while (i<n)
    {
        i++;
        printf("i love you %d\n",i);
    }
}

