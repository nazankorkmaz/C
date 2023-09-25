#include <stdio.h>
#include<stdlib.h>
typedef struct main
{
    char ad[10];
    int yas;
    int kilo;
    float boy;
    struct main *next;

}pp;


void dosyadanYeniEkle(pp **a, FILE *po)
{
    
    pp *yeni = (pp *)malloc(sizeof(pp));
    if (yeni == NULL) {
        printf("Bellek tahsis hatası!\n");
        return;
    }
    
    if(fscanf(po,"%s %d %d %f",&yeni->ad,&yeni->yas,&yeni->kilo,&yeni->boy)==4)  //satırı okuyup değişkenlere attım
    {
        yeni->next=NULL;
   
        if (*a == NULL) 
        {
            *a = yeni;
             return;
        }
    
        pp *gos = *a;
        while (gos->next != NULL) 
        {
            gos = gos->next;
        }
        gos->next = yeni;
    }
    else
        free(yeni);
    
}

int listeYaz(pp *dugum)
{
    if(dugum==NULL)
        printf("Liste bos\n");
    else{
        printf("Liste   :\n");
        while(dugum !=NULL)
        {
            printf("%s  ",dugum->ad);
            printf("%d  ",dugum->yas);
            printf("%d  ",dugum->kilo);
            printf("%.2f  \n",dugum->boy);
            dugum = dugum->next;
        }
    }
    return(0);
}

/* function to swap data of two nodes a and b*/

void swappp(pp *a, pp *b) 
{ 
    float temp = a->boy; 
    a->boy = b->boy; 
    b->boy = temp; 

    int yas = a->yas; 
    a->yas = b->yas; 
    b->yas = yas; 

    int kilo = a->kilo; 
    a->kilo = b->kilo; 
    b->kilo = kilo; 

    char ad[10];
    int i=0;
    while (a->ad[i])
    {
        ad[i]=a->ad[i];
        i++;
    }
    ad[i]='\0';
    i=0;
    while (b->ad[i])
    {
        a->ad[i]=b->ad[i];
        i++;
    }
    a->ad[i]='\0';
    i=0;
    while (ad[i])
    {
        b->ad[i]=ad[i];
        i++;
    }
    b->ad[i]='\0';
} 



void bubbleSort(pp *start,FILE *po2) 
{ 
    int swapped, i; 
    pp *ptr1; 
    pp *lptr = NULL; 
  
    /* Checking for empty list */
    if (start == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        ptr1 = start; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->boy > ptr1->next->boy) 
            { 
                swappp(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; //yine null oldu burda
    } 
    while (swapped); 

     fprintf(po2, "Sıralanmış Liste:\n");
    pp *gezici = start;
    while (gezici != NULL) {
        fprintf(po2, "%s %d %d %f\n", gezici->ad, gezici->yas, gezici->kilo, gezici->boy);
        gezici = gezici->next;
    }
} 
  



int main()
{
    FILE *po;
    pp *bas=NULL;

    po=fopen("oyuncu.dat","r");

    if(!po)
    {
        printf("Dosya acilamdi");
        return 0;
    }
    
    while(!feof(po))
    {
       dosyadanYeniEkle(&bas,po);
    }
    listeYaz(bas);

    printf("-----------Simdi oyunculari boy siramalasina gore index.dat dosyasina ekleyelim.-----------");

    FILE *po2;
    po2=fopen("index.dat","w");

    if(!po2)
    {
        printf("Dosya acilamdi");
        return 0;
    }

    bubbleSort(bas,po2);
    listeYaz(bas);
 
    fclose(po);
    fclose(po2);

}