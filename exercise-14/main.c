#include <stdio.h>
#include <stdlib.h>
//BIR DOSYA ICINDEKI KARAKTERLERIN KUCUK OLANLARINI BUYUK HARFE CEVIRIP YENI BIR DOSYAYA KAYDETME
int main()
{
    int karakter;
    FILE *dosya,*dosya2;
    dosya=fopen("kucuk_harfli.txt","r");
    dosya2=fopen("buyuk_harfli.txt","w");
    if(dosya == NULL)
    {
        printf("dosya bulunamadi");
    }
    else
    {
        do
        {
            karakter=fgetc(dosya);
            if(karakter !=EOF)
            {

                if(karakter>= 'a' && karakter <= 'z')
                {
                    fprintf(dosya2,"%c",karakter-32);
                }
                else
                {
                    fprintf(dosya2,"%c",karakter);
                }

            }


        }
        while(karakter != EOF);
        fclose(dosya);
        fclose(dosya2);
        printf("tamalandi...");
    }

    return 0;
}
