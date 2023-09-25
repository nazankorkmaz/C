#include <stdio.h>

int main()
{
    FILE *gos; //dosyanın yerini gösterecek
    int i;
    gos=fopen("ascii.txt","w"); //fopen açılan dosyanın adresini döndürür

    if(gos==NULL)
        printf("dosya açılmadı");

    else {
        for (i=0;i<255;i++)
            fprintf(gos,"%d     %c\n",i,i);  //dosyaya yazdır
        fclose(gos); 
    }
    //dosya açıldığında geçici süreliğine ikincil bellekten rame gelmişti onu sildik
     //bitler bytlerı karakterler dosyayı dosya da akışı oluşturur.
}