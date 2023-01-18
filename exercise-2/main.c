#include <stdio.h>
#include <stdlib.h>
//DOSYADAN VERI OKUMA ISLEMLERI
int main()
{
    /*
    //daha �nce olan bir dosyadan bir karakter okuma fgetc()
    FILE *dosya;
    dosya=fopen("metinBelgesi.txt","r");
    char karakter;
    if(dosya!=NULL)
    {
        karakter=fgetc(dosya);//dosyadan tek bir karakter cekme komutu fgetc() olur
        printf("%c",karakter);//dosyadan cekilen karakter char tipindeki veriye atan�r ve orada tutulur
    }
    else
    {
        printf("dosya bulunamadi");
    }
    fclose(dosya);
    */

    /*
    //dosyadan veri okuma fscanf() komutu kullan�m� fscanf() bosluk karakterine kadar olan verileri al�r
    FILE *dosya;
    char k1[10],k2[10];
    int sayi;
    if((dosya=fopen("bilgi.txt","r"))!=NULL)
    {
        fscanf(dosya,"%s",&k1);
        fscanf(dosya,"%s",&k2);
        fscanf(dosya,"%d",&sayi);
        printf("%s %s %d",k1,k2,sayi);

    }
    else
    {
        printf("dosya bulunamadi");
    }
    fclose(dosya);
    */

    /*
    //dosyadan c�mle okuma d�ng� ile
    FILE *dosya;
    int i=0;
    char kelime[50][20];//fscanf ile cekilen veriler kelime olarak cekilir herbir harf icinde ayr� dizi boyutu kullan�l�r
    if((dosya=fopen("kdizim.txt","r"))!=NULL)
    {
       while(!feof(dosya))
       {
           fscanf(dosya,"%s",&kelime[i]);//dosyadan kelime ve harfleri ceker ve kelime dizisine atar
           printf("%s ",kelime[i]);//konsol ekran�na bast�r�r
           i++;
       }
    }
    else
    {
        printf("dosya bulunamadi");
    }
    fclose(dosya);
    */

    /*
    //haz�rlanm�s veri tablosudan bilgi okuma
    FILE *dosya;
    int i=0;
    char numaralar[50][20],isimler[20][20];
    int notlar[10];
    if((dosya=fopen("VeriTablosu.txt","r"))!=NULL)
    {
       while(!feof(dosya))
       {
           fscanf(dosya,"%s %s %d",&numaralar[i],&isimler[i],&notlar[i]);
           printf("%s %s %d\n",numaralar[i],isimler[i],notlar[i]);

           i++;
       }
    }
    else
    {
        printf("dosya bulunamadi");
    }
    fclose(dosya);
    */

    /*
    //veri okuyarak paragraf bast�rma islemi
    FILE *dosya;

    char karakter;
    if((dosya=fopen("lorem.txt","r"))!=NULL)
    {
        karakter=fgetc(dosya);//direk d�ng�y girdi�inde ilk harfi basmaz
       while(karakter!=EOF)
       {
           printf("%c",karakter);
           karakter=fgetc(dosya);
       }
    }
    else
    {
        printf("dosya bulunamadi");
    }
    fclose(dosya);
    */
    return 0;
}
