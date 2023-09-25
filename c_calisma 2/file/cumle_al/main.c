#include<stdio.h>

int main()
{
    FILE *po;
    char satir[256];
    int cumle=0;
    int i;
    int kelime =0;
    int karakter=0;
    po=fopen("metin.txt","r");
    
    if(!po)
        printf("Dosya açilamadi");
        
    
    while (fgets(satir, sizeof(satir), po)) 
    {
        i=0;
        while(satir[i])
        {
            if(satir[i]=='.')
                cumle++;
            if((satir[i+1] >= 9 && satir[i+1]<= 13 )|| satir[i+1]== 32 )//satir[i+1]== '\n' ||  satir[i+1]== '\0'||  satir[i+1]== '.'))
                kelime++;
            if((satir[i]>= 'a' && satir[i]<='z') || (satir[i]>= 'A' && satir[i]<='Z'))
                karakter++;
            i++;
            }
    }
        printf("Cumle sayisi    =>  %d\n",cumle);
        printf("kelime sayisi    =>  %d\n",kelime);
        printf("Karakter sayisi    =>  %d",karakter);
       
       
    
    fclose(po);
    
}