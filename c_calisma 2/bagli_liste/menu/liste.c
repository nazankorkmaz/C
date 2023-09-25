#include <stdio.h>
#include<stdlib.h>

typedef struct monu
{
    int data;
    struct monu *po;
}mn;

void yeniEkle(mn **a, int x)
{
    mn *yeni=(mn *)malloc(sizeof(mn));
    mn *gos=*a;
    yeni->data=x;
    while(gos->po)
    {
        gos=gos->po;
    }
    gos->po=yeni;
    yeni->po=NULL;
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
}

int main()
{
    int secim;
    int yas;
   
    printf("----------MONU----------\n");
   
    mn *a;
    mn *b;
  
    a= (mn *)malloc(sizeof(mn));
    b= (mn *)malloc(sizeof(mn));
    a->data=1;
    b->data=2;
    a->po= b; 
    b->po=NULL;
    /*
    while(a->data)
    {
        printf("%d  ",a->data);
        a=a->po;
    }
    */
    //printf("\n");
    yeniEkle(&a,3);
    listeYaz(a);
       


}