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
            karakter=fgets(satir,100,dosya);//fgets komutunda kullanmas� fgets(dizinin adi,boyutu,bulundu�u dosya) adi seklinde olur
            if(karakter != NULL)//karakterin i�aret etti�i veri bo� olmayana kadar bast�r
            {
                printf("%s",satir);
            }
        }while(karakter != NULL);
        fclose(dosya);
        printf("\nislem tamamlandi");
    }

    return 0;
}
