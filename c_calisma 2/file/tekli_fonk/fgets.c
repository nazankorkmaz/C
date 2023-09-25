#include<stdio.h>

int main()
{
    FILE *po1;
    char satir[256];
    char dosyaadi[20];

    printf("dosyanin adini girin\n");
    gets(dosyaadi);

    if((po1=fopen(dosyaadi,"r"))==NULL)
        printf("dosya açilamadi");
    
   // fgets(satir,256,po1); //dosyadan 69 karakter okuyup değişkene atti

   
    while (fgets(satir, sizeof(satir), po1)) {
        printf("%s", satir);
    }
    /*
    while (!feof(po1))
    {
        printf("%s",satir);
       
        fgets(satir,256,po1);
    }
    */
    fclose(po1);
    return 0;


}