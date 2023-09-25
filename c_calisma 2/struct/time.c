#include<stdio.h>


 struct zaman{
    int saat;
    int dakika;
    int saniye;
};

void zamantopla(struct zaman *a, struct zaman *b);

int main()
{
    struct zaman a ={23,30,20};
    struct zaman b={1,0,40};

    zamantopla(&a,&b);
    printf("yeni zaman a:\t %d: %d: %d",a.saat,a.dakika,a.saniye);
}

void zamantopla(struct zaman *a, struct zaman *b)
{
    a->saniye+=b->saniye;
     if(a->saniye>=60)
    {
        a->dakika += (a->saniye -a->saniye %60)/60;
        a->saniye %=60;    
    }
    a->dakika+=b->dakika;
     if(a->dakika>=60)
    {
       a->saat +=1; 
       a->dakika %=60;  
    }
    a->saat+=b->saat;
     if(a->saat>=24)
    {
       a->saat%=24; 
    }

}

/*
typedef struct zaman{
    int saat;
    int dakika;
    int saniye;
}zmn;

zmn  new_time(zmn *eski, int eklenen_saniye)
{
    eski->saniye+=eklenen_saniye;
    if(eski->saniye>=60)
    {
        eski->dakika += (eski->saniye - eski->saniye %60)/60;
        eski->saniye %=60;    
    }
    if(eski->dakika>=60)
    {
        eski->saat +=1; 
        eski->dakika %=60; 
    }
    if(eski->saat>23)
    {
        eski->saat%=24;

    }
    return *eski;
}


int main()
{
    zmn ori;
    int saniye;
    zmn new;
    printf("orijinal zamani girin\n");
    scanf("%d%d%d",&ori.saat,&ori.dakika,&ori.saniye);
    printf("eklenecek saniyeyi girin\n");
    scanf("%d",&saniye);
    new=new_time(&ori,saniye);
    printf("Yeni zamaniniz:");
    printf("%d : %d : %d",new.saat,new.dakika, new.saniye);
}
*/





/*

typedef struct zaman{
    int saniye;
    int dakika;
    int saat;
}suan;

void zamanfarki(suan t1, suan t2, suan *aa);

int main()
{
    suan bast, sont, fark;

    printf(" başlangıç zamanı saat , dakika, saniye cinsinden girin\n");

    scanf("%d %d %d", &bast.saat,&bast.dakika, &bast.saniye);
    
    printf("bitiş zamanı saat , dakika, saniye cinsinden girin\n");

    scanf("%d %d %d", &sont.saat,&sont.dakika, &sont.saniye);

    zamanfarki(bast, sont, &fark);

    printf("girilen zamanlar arasındaki fark---->>>");
    printf("%d %d %d",fark.saat,fark.dakika,fark.saniye);
}

void zamanfarki(suan start, suan stop, suan *diff)
{
    while(stop.saniye>start.saniye){
        --start.dakika;
        start.saniye+=60;
    }
    diff->saniye = start.saniye - stop.saniye;
   while (stop.dakika > start.dakika) {
      --start.saat;
      start.dakika += 60;
   }
   diff->dakika = start.dakika - stop.dakika;
   diff->saat = start.saat - stop.saat;
}
*/