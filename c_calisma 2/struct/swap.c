#include<stdio.h>

struct swap
{
    char ad[20];
    char soyad[20];
    int sira;
    float ort;
    char cinsiyet;
};

void swap(struct swap *x, struct swap *y)
{
    struct swap temp=*x;

    int i=0;

    while(x->ad[i])
    {
        x->ad[i]=y->ad[i];
        y->ad[i]= temp.ad[i];
        i++;
    }

     i=0;

    while(x->soyad[i])
    {
        x->soyad[i]=y->soyad[i];
        y->soyad[i]= temp.soyad[i];
        i++;
    }

    x->ort=y->ort;
    y->ort=temp.ort;

    x->cinsiyet=y->cinsiyet;
    y->cinsiyet=temp.cinsiyet;

    x->ort=y->ort;
    y->ort=temp.ort;


}

int main()
{
    struct swap a={"nazan","korkmaz",5,77,'K'};
    struct swap b={"aa","bb",7,55,'E'};
    printf("a:  ");
    printf("%s  %s  %d  %f  %c\n",a.ad,a.soyad,a.sira,a.ort,a.cinsiyet);
    printf("b:  ");
    printf("%s  %s  %d  %f  %c\n",b.ad,b.soyad,b.sira,b.ort,b.cinsiyet);

    printf("-----takaslandiniz---\n");

    swap(&a,&b);
    printf("a:  ");
    printf("%s  %s  %d  %f  %c\n",a.ad,a.soyad,a.sira,a.ort,a.cinsiyet);
    printf("b:  ");
    printf("%s  %s  %d  %f  %c\n",b.ad,b.soyad,b.sira,b.ort,b.cinsiyet);


}