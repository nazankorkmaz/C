#include<stdio.h>

typedef struct struct_example
{
    /* data */
    char name[20];
    char lname[20];
    float ort;
}students;

int main()
{
    students dizi[5];
    int i=0;
    

    while(i<5)
    {
        printf("%d",i);
        printf(")  Oğrencinin adi ,soyadi ve ortalamasini giriniz: ");
        scanf("%s %s %f",&dizi[i].name,&dizi[i].lname,&dizi[i].ort);
        printf("\n");
       
        i++;
    }
        printf("-------------LİSTE----------------\n");

   int j; //ortalamasına göre yazdıralım
     for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            if (dizi[j].ort < dizi[j + 1].ort)
            {
                // Öğrenci bilgilerini yer değiştir
                students tempStudent = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = tempStudent;
            }
        }
    }
      for (i = 0; i < 5; i++)
    {
        printf("%s %s %f\n", dizi[i].name, dizi[i].lname, dizi[i].ort);
    }

    //soyadının harfine göre sıralayalım
    printf("%s","şimdi de soyadina göre siralayalim\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            char a,b;
            a= *dizi[j].lname;
            b= *dizi[j+1].lname;

            if(a>=65 && a <=90 )
                a += 22;
            
            if(b>=65 && b<=90 )
                b += 22;    
            if(a< b)
            {
                students templname= dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=templname;
            }
        }
    }
      for (i = 0; i < 5; i++)
    {
        printf("%s %s %f\n", dizi[i].name, dizi[i].lname, dizi[i].ort);
    }
}
