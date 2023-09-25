#include<stdio.h>
#include<stdlib.h>

typedef struct main
{
    /* data */
    int sayi;
    struct main *ptr;
}fdugum;

void yeniEkle(fdugum **p,int b)
{
    fdugum *yeni=(fdugum *)malloc(sizeof(fdugum));

     if (yeni == NULL) {
        printf("Bellek tahsis hatası!\n");
        return;
    }
    yeni->sayi=b;
    yeni->ptr=NULL;
    
    if (*p == NULL) {
        *p = yeni;
        return;
    }

    fdugum *gos=*p;
    
    while (gos->ptr)
    {
        /* code */
        gos=gos->ptr;
    }
    gos->ptr=yeni;
   
}
int listeYaz(fdugum *p)
{
    if(p==NULL)
        printf("Lİste bos\n");
    else{
        while (p)
        {
            printf("%d  ",p->sayi);
            p=p->ptr;
            /* code */
        }
        
    }
}

void sondanSil(fdugum *p)
{
    if(p==NULL || p->ptr==NULL)
    {
        printf("hata");
        return;
    }
    fdugum *gos=p;
    while(gos->ptr->ptr)
    {
        gos=gos->ptr;
    }
    free(gos->ptr->ptr);
    gos->ptr=NULL;
    
}

int main()
{
    fdugum *bas=NULL;
    int a;
    int b;
    printf("eleman ekleyin ya da çikmak için q basin\n");
    int i=0;
    while (i<5)
   {
        scanf("%d",&a);
        yeniEkle(&bas,a);
        
        i++;
   }

   printf(" LİSTE   \n");
   listeYaz(bas);
   printf("  sondan silindi \n");


    sondanSil(bas);
    listeYaz(bas);
    
}