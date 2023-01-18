#include <stdio.h>
#include <stdlib.h>
//BIR TXT DOSYASI ICINDEKI VERININ SATIR SATIR OKUNMASI ISLEMI
int main()
{
    FILE *dosya;
    char satir[100],*karakter;
    dosya=fopen("metin.txt","r");
    if(dosya == NULL)
    {
        printf("dosya olsuturulamadi");
    }
    else
    {
        do
        {
            karakter=fgets(satir,100,dosya);//fgets komutunda kullanmasý fgets(dizinin adi,boyutu,bulunduðu dosya) adi seklinde olur
            if(karakter != NULL)//karakterin iþaret ettiði veri boþ olmayana kadar bastýr
            {
                printf("%s",satir);
            }
        }while(karakter != NULL);
        fclose(dosya);
        printf("\nislem tamamlandi");
    }

    return 0;
}
