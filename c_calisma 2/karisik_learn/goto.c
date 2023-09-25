#include<stdio.h>

int main()
{
    int i;
    int j;
    for( i=0;i<5;i++)
    {
        for( j=7;j>2;j--)
        {
            printf("i am a %d %d\n",i,j);
        }
        if(i==3)
            goto go_fonk;
        
    }

    go_fonk:
        printf("---------------");
}