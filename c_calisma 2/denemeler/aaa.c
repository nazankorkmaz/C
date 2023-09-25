#include<stdio.h>
#include <unistd.h>

void print_p(char a)
{
    write(1,&a,1);
}

void print_po(char *a)
{
    //printf("%s",a);
    while(*a)
    {
        write(1,a,1);
        a++;

    }
}
int main()
{
    char a='x';

    printf("%c",a);
    printf("\n%p",&a);
    printf("\n%d",&a);

    printf("\n--------------------------\n");

    char *b="nazan";
    printf("%d",b);
    printf("\n%p\n",b);
    printf("%c -- %c",b[2],*(b+2));


    printf("\n--------------------------\n");

    print_p(b[4]);

    printf("\n--------------------------\n");

     print_p(*(b+4));

    printf("\n--------------------------\n");
    
    print_po(b);
    

    printf("\n--------------------------/////////////\n");

    char t= 'c';
    char *d=&t;
    char **y= &d;

    printf("1   :   %c",t);
    printf("\n2   :   %d",&t);
    printf("\n3   :   %d",d);
    printf("\n4   :   %c",*d); 
    printf("\n5   :   %d",y); 
    printf("\n6   :   %d",*y); 
    printf("\n7   :   %c",**y); 
}

