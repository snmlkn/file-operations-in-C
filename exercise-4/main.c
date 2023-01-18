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
             karakter=getc(dosya);//dosyadan herbir karakteri ayrý ceker
             if(karakter !=EOF)
             {
                 putchar(karakter);//konsola herbir karakteri bastýrýr
             }
         }while(karakter !=EOF);

     }
        fclose(dosya);
        printf("\nislem tamamlandi");
    return 0;
}
