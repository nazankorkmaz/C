#include<stdio.h>

int main()
{
    FILE *po1;
    FILE *po2;

    char kaynak[12];
    char ch;

    printf("Kopyasi alinacak dosyanin adini girin\n");
    scanf("%s",kaynak);

    if((po1=fopen(kaynak,"r"))==NULL)
    {
        printf("kaynak dosyasi açilamadi");
    }
  if((po2=fopen("yedek.bak","w"))==NULL)
    {
        printf("yedek.bak dosyasi açilamadi");
    }

    ch=fgetc(po1); //karakter okur ve aktarır

    while(!feof(po1))
    {
        fputc(ch,po2); //belirtilen akişa bir karakteri yazar

        ch=fgetc(po1);
    }
    fclose(po1);
    fclose(po2);
    return 0;

}