#include <stdio.h>
#include <stdlib.h>
// BIR TXT DOSYASI ICINDEKI VERILERIN KKARAKTER KARAKTER OKUNARAK EKRANA BASTIRILMASI
int main()
{
    FILE *dosya;
    char karakter;
    dosya=fopen("bilgi.txt","r");
    if(dosya==NULL)
    {
        printf("olusturulamadi");
    }
     else
     {
         do
         {
             karakter=getc(dosya);//dosyadan herbir karakteri ayr� ceker
             if(karakter !=EOF)
             {
                 putchar(karakter);//konsola herbir karakteri bast�r�r
             }
         }while(karakter !=EOF);

     }
        fclose(dosya);
        printf("\nislem tamamlandi");
    return 0;
}
