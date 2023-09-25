#include<stdio.h>
#include<stdarg.h>
void coklu(int a,...)
{
    va_list valist;
    va_start(valist,a);
    printf("dongu\n");
    int i;
    for(i=0; i<a;i++)
        printf("%d-----",va_arg(valist,int));
    /*
    while(a)
    {
    printf("%d-----",va_arg(valist,int));
    a--;
    }
    */
    va_end(valist);
}



int main()
{
    int i=3;
    while(i)
    {
        coklu(4,0,1,2,3+i);
        i--;
    }
}
