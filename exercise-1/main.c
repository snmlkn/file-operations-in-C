#include <stdio.h>
#include <stdlib.h>
//DOSYA ISLEMLERI ACMA VE VERI KAYDETME
int main()
{
    /*
    //dosya açma islemi
    FILE *dosya;
    dosya=fopen("deneme.txt","w");//dosyayý açýp,dosya isimli dosyanýn txt türünde ve write ((w)=dosya olusturma komutu) modunda olduðunu belirledik
    fclose(dosya);//dosyayý kapattýk
    */

    /*
    //acýlan dosyaya veri kaydetme islemi
    FILE *dosya;
    char name[]="sinem";//karakter dizisi oluþturduk
    dosya=fopen("sinem.txt","w");//dosyaya isim ve mod ekledik
    fprintf(dosya,"bu dosya %s dosyasidir",name);//dosya içine sinem.txt dosyasýný oluþturup içine metin bastýrdýk
    fclose(dosya);//dosyayý kapattýk
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
    dosya=fopen("ogrenciBilgileri.txt","a");  //dosya=fopen("ogrenciBilgileri.txt","w"); //dosya oluþturuldutan sonra a komutu ile dosya sonuna ekleme yapýlýr
    char name[20],school[20],department[20];

    printf("name:"); //konsol ekranýnda görüntülemek için kullandýk
    gets(name);      //scanf boþluk karakterine kadar veri alýrken gets yazýlan verinin hepsini alýr
    printf("school:"); gets(school);
    printf("departpent:"); gets(department);

    fprintf(dosya,"%s\n%s\n%s\n",name,school,department);//ogrenci bilgileri isimli dosyaya batýrýlacak bilgiler

    fclose(dosya);
    */

    /*
    //fputs kullanýmmý
    FILE *dosya;
    dosya=fopen("merhaba.txt","a");
    fputs("\nmerhaba coders",dosya);
    fclose(dosya);
    */

    return 0;
}
