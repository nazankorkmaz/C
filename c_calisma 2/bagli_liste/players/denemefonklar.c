
    void sirala(pp **bas,FILE *po2) {
    pp *current, *index;
    pp *temp;

    if (*bas == NULL) {
        return;
    } else {
        for (current = *bas; current->next != NULL; current = current->next) {
            for (index = current->next; index != NULL; index = index->next) {
                if (current->boy > index->boy) {
                    // Boy değerlerini değiştir
                    /*
                    temp->boy = current->boy;
                    current->boy = index->boy;
                    index->boy = temp->boy;
                    */
                    /*
                    temp->ad = current->ad;
                    current->ad = index->ad;
                    index->ad = temp->ad;
                    */
                   



                }
            }
            fprintf(po2,"%s %d %d %f\n",current->ad,current->yas,current->kilo,current->boy);
        }
    }
}

void siralaa2(pp **bas, FILE *po2)
{
    pp *yeni=(pp *)malloc(sizeof(pp));
    if(yeni==NULL)
    {
        printf("Bellek tahsis edilemedim\n");
        return;
    }

    pp *temp, *a, *b;
    yeni->boy=a->boy;
    for (a =*bas; a->next != NULL; a = *bas)
    {   
        printf("%f\n",a->boy);
        
        for(b=a->next; b->next !=NULL; b=b->next)
        {
            if(b->boy < yeni->boy)
            {
                yeni=b;
            }
                //yeni->boy= a->next->boy;
        }
        
        fprintf(po2,"%s %d %d %f\n",yeni->ad,yeni->yas,yeni->kilo,yeni->boy);

    }
    free(yeni);
}
void siralaa(pp **bas, FILE *po2)
{
    if (*bas == NULL || (*bas)->next == NULL) {
        return; // Boş veya tek elemanlı liste, sıralamaya gerek yok
    }

    pp  *a, *b, *yeni;
    float temp;
    for (a = *bas; a->next != NULL; a = a->next)
    {
        yeni = a;
        for (b = a->next; b != NULL; b = b->next)
        {
            if (b->boy < yeni->boy)
            {
                yeni = b;
            }
        }
        
        // Swap işlemi
        if (yeni != a)
        {
            temp = a->boy;
            a->boy = yeni->boy;
            yeni->boy = temp;
        }
       
    }

    // Sıralanmış liste içeriğini dosyaya yazdır
    fprintf(po2, "Sıralanmış Liste:\n");
    pp *gezici = *bas;
    while (gezici != NULL) {
        fprintf(po2, "%s %d %d %f\n", gezici->ad, gezici->yas, gezici->kilo, gezici->boy);
        gezici = gezici->next;
    }
    
}

void swap (pp *a, pp *b) {
    pp *tmp;

    tmp = a;
    a = b;
    b = tmp;
}

void siralaaa(pp **bas, FILE *po2)
{
    if (*bas == NULL || (*bas)->next == NULL) {
        return; // Boş veya tek elemanlı liste, sıralamaya gerek yok
    }

    pp  *a, *b, *yeni;
    float temp;
    for (a = *bas; a->next != NULL; a = a->next)
    {
        yeni=a;
        for (b = a->next; b != NULL; b = b->next)
        {
            if (b->boy < yeni->boy)
            {
                swap(a,b);
                
            }
        }
        
        // Swap işlemi
        if (yeni != a)
        {
            temp = a->boy;
            a->boy = yeni->boy;
            yeni->boy = temp;
        }
       
    }

    // Sıralanmış liste içeriğini dosyaya yazdır
    fprintf(po2, "Sıralanmış Liste:\n");
    pp *gezici = *bas;
    while (gezici != NULL) {
        fprintf(po2, "%s %d %d %f\n", gezici->ad, gezici->yas, gezici->kilo, gezici->boy);
        gezici = gezici->next;
    }
    
}


void yeniEkle(pp **a, char ad[10], int y, int k,float b)
{
    pp *yeni=(pp *)malloc(sizeof(pp));
    pp *gos=*a;
    yeni->boy=b;
    yeni->kilo=k;
    yeni->yas=y;
    int i=0;
    while(ad[i])
    {
        yeni->ad[i]=ad[i];
        i++;
    }
    yeni->ad[i]='\0';
    while(gos->next)
    {
        gos=gos->next;
    }
    gos->next=yeni;
    yeni->next=NULL;
}

*/