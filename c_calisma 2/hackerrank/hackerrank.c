#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char a;
    char *st;
    char *sent;

    st=malloc(100);
    sent=malloc(100);    
    scanf("%c",&a);
    while(*st!=10 && *st!=32)
    {
        scanf("%c",&st);
        st++;
    }
     while(*sent!=10 && *sent!=32)
    {
        scanf("%c",&sent);
        sent++;
    }
    printf("%c",a);
    printf("%s",st);
    printf("%s",sent);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}