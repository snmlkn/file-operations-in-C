#include <stdio.h>
#include <stdlib.h>
//DOSYA ISLEMLERI ACMA VE VERI KAYDETME
int main()
{
    /*
    //dosya a�ma islemi
    FILE *dosya;
    dosya=fopen("deneme.txt","w");//dosyay� a��p,dosya isimli dosyan�n txt t�r�nde ve write ((w)=dosya olusturma komutu) modunda oldu�unu belirledik
    fclose(dosya);//dosyay� kapatt�k
    */

    /*
    //ac�lan dosyaya veri kaydetme islemi
    FILE *dosya;
    char name[]="sinem";//karakter dizisi olu�turduk
    dosya=fopen("sinem.txt","w");//dosyaya isim ve mod ekledik
    fprintf(dosya,"bu dosya %s dosyasidir",name);//dosya i�ine sinem.txt dosyas�n� olu�turup i�ine metin bast�rd�k
    fclose(dosya);//dosyay� kapatt�k
    */

    /*
    //carpim tablosu bastirma
    FILE *dosya;
    dosya=fopen("carpimTablosu.txt","w");

    int i,j;
    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            fprintf(dosya,"%d X %d = %d\n",i,j,i*j);
        }
        fprintf(dosya,"\n");
    }
    fclose(dosya);
    */

    /*
    //ogrenci bilgileri dosyasi
    FILE *dosya;
    dosya=fopen("ogrenciBilgileri.txt","a");  //dosya=fopen("ogrenciBilgileri.txt","w"); //dosya olu�turuldutan sonra a komutu ile dosya sonuna ekleme yap�l�r
    char name[20],school[20],department[20];

    printf("name:"); //konsol ekran�nda g�r�nt�lemek i�in kulland�k
    gets(name);      //scanf bo�luk karakterine kadar veri al�rken gets yaz�lan verinin hepsini al�r
    printf("school:"); gets(school);
    printf("departpent:"); gets(department);

    fprintf(dosya,"%s\n%s\n%s\n",name,school,department);//ogrenci bilgileri isimli dosyaya bat�r�lacak bilgiler

    fclose(dosya);
    */

    /*
    //fputs kullan�mm�
    FILE *dosya;
    dosya=fopen("merhaba.txt","a");
    fputs("\nmerhaba coders",dosya);
    fclose(dosya);
    */

    return 0;
}
