#include<stdio.h>

int main()
{
    int yas;
    char ad[20];
    char soyad[20];
    FILE *po;

    po=fopen("veri.dat","r");

    if(po==NULL)
        printf("dosya açilamadi");
    
    printf("        KAYITLAR        \n");

    fscanf(po, "%s%s%d",ad,soyad,&yas); //dosyadan okuma yaptı

    while(!feof(po))
    {
        //dosya sonu olmadığı sürece devam
        printf("%s   %s %d\n",ad,soyad,yas); //terminale yazdı
        fscanf(po,"%s%s%d",ad,soyad,&yas);

    }
    fclose(po);
    return(0);
    
    
}