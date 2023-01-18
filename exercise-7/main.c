#include <stdio.h>
#include <stdlib.h>
//ICERISINDE VERI BULUNAN DOSYANIN SONUNA KARAKTER KARAKTER VERI EKLENMESI
int main()
{
    FILE *dosya;
    int i;
    char ekleme[100];
    dosya=fopen("bilgi.txt","a");
    if(dosya==NULL)
    {
        printf("dosya islemi basarisiz");
    }
    else
    {
        printf("eklenecek cumleyi girin\n");
        gets(ekleme);
        for(i=0;ekleme[i];i++)
        {
            putc(ekleme[i] ,dosya);
        }
        putc('\n',dosya);
    }
    fclose(dosya);
    printf("islem tamamlandi");
    return 0;
}
