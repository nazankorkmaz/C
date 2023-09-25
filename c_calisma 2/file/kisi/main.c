#include<stdio.h>
#include <ctype.h>
int main()
{
    int yas;
    char ad[20];
    char soyad[20];
    FILE *po;
    char a;
    

    po= fopen("veri.dat","a"); //a olunca dosyanın sonundan kaydeder

    if(!po)
        printf("Dosya açilamadi");
    
    do{
         printf("Sirasiyla adinizi soyadinizi ve yasinizi giriniz\n ");
            scanf("%s%s%d",ad,soyad,&yas);

        fprintf(po,"%s  %s  %d\n",ad,soyad,&yas);

        printf("devam edecek misiniz? (E/H)\n");
        scanf(" %c",&a); ////önüne boşluk koymazsak olmuyorr

        a=toupper(a);
       

    }while(a!='H');

    fclose(po);
    
    

}