#include <stdio.h>
#include<stdlib.h>

typedef struct monu
{
    int data;
    struct monu *po;
}mn;

/* //benim yazdığım
void yeniEkle(mn **a, int x)
{
    mn *yeni=(mn *)malloc(sizeof(mn));
  
 if (yeni == NULL) {
        printf("Bellek tahsis hatası!\n");
        return;
    }
    if (*a == NULL) {
        *a = yeni;
        return;
    }
    yeni->data=x;
    yeni->po=NULL;
    mn *gos=*a;
    while(gos->po)
    {
        gos=gos->po;
    }
    gos->po=yeni;
   
 
}
*/

void yeniEkle(mn **a, int x)
{
    mn *yeni = (mn *)malloc(sizeof(mn));
    if (yeni == NULL) {
        printf("Bellek tahsis hatası!\n");
        return;
    }
    yeni->data = x;
    yeni->po = NULL;
    
    if (*a == NULL) {
        *a = yeni;
        return;
    }
    
    mn *gos = *a;
    while (gos->po != NULL) {
        gos = gos->po;
    }
    gos->po = yeni;
}


int listeYaz(mn *dugum)
{
    if(dugum==NULL)
        printf("Liste bos\n");
    else{
        printf("Liste   :\n");
        while(dugum !=NULL)
        {
            printf("%d  ",dugum->data);
            dugum = dugum->po;
        }
    }
    return(0);
}

int elemanSayi(mn *dugum)
{
    int i=0;
    if(dugum==NULL)
    {
        printf("eleman yok\n");
        return(0);
    }
    else{
        while(dugum)
        {
            i++;
            dugum=dugum->po;
        }
        printf("%d\n",i);
       return(0);
    }
}

int main()
{
    int secim, yas , sayi;
    mn *baspo = NULL;
    printf("----------MONU----------\n");
    printf("0   -   Listedeki elemanlari yazdirma\n");
    printf("1   -   Listeye yeni eleman ekleme\n");
    printf("2   -   Listedeki eleman sayisi\n");
    printf("3   -   Cikis\n");
    printf("Seciminiz   (0-3) ? :\n");
    
    scanf("%d",&secim);

    while (!(secim >=0 && secim <3))
    {
         printf("Yanlis deger girildi\n");
         printf("Seçiminiz   (0-3) ? :");
            scanf("%d",&secim);
    }
       
    
    while(secim==0 || secim==1 || secim==2)  
    {
    
        if(secim==0)
            listeYaz(baspo);
                
       else if(secim==1)
        {
            printf("Sayiyi girin:   ");
            scanf("%d",&sayi);
            yeniEkle(&baspo,sayi);
        }            
        else if(secim==2)
        {
            elemanSayi(baspo);
        }
           
        
        printf("Seciminiz   (0-3) ? :");
        scanf("%d",&secim);
    }

    
         printf("Cikis yapildi");
         return(0);
    
   
}
