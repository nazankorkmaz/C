#include<stdio.h>

#include <ctype.h>
int main()
{
    FILE *po;

    char isim[10];
    char sisim[10];
    char bolum[10];
    char sec;
    int a;

    printf("\nOgrenci bilgilerine hoşgeldiniz\n");
    printf("----------------------------------\n");
    printf("Kayit girmek icin 1'e , bilgileri almak icin 2'ye, belirli bilgileri almak icin 3'e basiniz\n");
    scanf("%d",&a);

    if(a==1)
    {
         po=fopen("veri.dat","a");

         if(!po)
             printf("Dosya açilamadi");

         do
        {

            printf("ad soyad ve bolum giriniz\n");
            scanf("%s%s%s",isim,sisim,bolum);
            fprintf(po,"%s %s %s\n",isim,sisim,bolum);
            printf("Devam etmek istiyor musnuz(E/H)\n");
            scanf(" %c",&sec);
        
        sec= tolower(sec);
        }while(sec=='e' || sec=='E');
    fclose(po);
    }
   
    if(a==2)
    {
        
         po=fopen("veri.dat","r");
         if(!po)
            printf("Dosya açilamadi");

        fscanf(po,"%s%s%s",isim,sisim,bolum);
        while(!feof(po))
        {
            printf("%s  %s  %s\n",isim,sisim,bolum);
            fscanf(po,"%s%s%s",isim,sisim,bolum);
        }
    
        fclose(po);
    }

       if(a==3)
    {
         po=fopen("veri.dat","r");
         char x[10];
         int s;

         if(!po)
             printf("Dosya açilamadi");

         do
        {

            printf("1- Ad\n 2- Soyad\n 3- Bolum\n Numarasini girin\n");
            scanf("%d",&s);
            fseek(po,0,SEEK_SET); // evet dediğinde başka bi şeyi vermez bunu koymazsan çünkü dosyanın sonuna gider. ama bununla dosyanın başına alıyorsun her çağırışında
            if(s==1)
            {
                 while(!feof(po))
                    {
                        fscanf(po,"%s %s %s",isim,sisim,bolum); //satırı okuyup değişkenlere attım
                        printf("%s\n",isim);            //sonra istediğim değişkeni çağırdım
                     }
            }
             if(s==2)
            {
                
                 while(!feof(po))
                    {
                         fscanf(po,"%s %s %s",isim,sisim,bolum);
                        printf("%s\n",sisim);
                     }
            }
             if(s==3)
            {
                 while(!feof(po))
                    {
                        fscanf(po,"%s %s %s",isim,sisim,bolum);
                        printf("%s\n",bolum);
                     }
            }
           
            printf("Devam etmek istiyor musnuz(E/H)\n");
             scanf(" %c",&sec);
            sec= tolower(sec);
            
        }while(sec=='e' || sec=='E');
    fclose(po);
    }

    
   

}

