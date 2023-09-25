#include <stdio.h>
#include <string.h>
#include<fcntl.h>

int main(void)
{
  FILE *f;
  f=fopen("map.txt","r");

  if(!f)
    printf("açilmadi");
/*
   char karakter;
   do{
    karakter=getc(f);
    
    printf("%c",karakter);
    system("COLOR 5"); // *************

   }while(karakter!=EOF);
*/

  char buf[1024];

  printf("%s",fgets(buf,1024,f)); //satır satır okur
  printf("%s",fgets(buf,1024,f)); 
  char *d=fgets(buf,1024,f);
  printf("%d\n",strlen(d));
  while(*d)
  {
    printf("%c-",*d);
    if(*d=='\0')
      printf("aaaa");
    d++;
  }
  printf("%d",strlen("nazan"));
  printf("  %d",strlen("nazan\n"));
  fclose(f);
   system("COLOR 0");
  
}