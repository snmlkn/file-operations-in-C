#include <stdio.h>
#include <stdlib.h>
//KULLANICIDAN ALINAN VERININ DOSYAYA KAYDEDILMESI VE ORADAN OKUNARAK EKRANA BASTIRILMASI
int main()
{
    FILE *dosya;
    int N,i,karakter;
    dosya=fopen("tekcýft.txt","w");

    if(dosya == NULL)
    {
        printf("islem basarisiz");
    }
    else
    {
        printf("son sayiyi girin\n");
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            if(i%2==0)
            {
                fprintf(dosya,"%d = cift\n",i);
            }
            else
            {
                fprintf(dosya,"%d = tek\n",i);
            }
        }

           fclose(dosya);
           printf("islem tamamlandi\n");
    }
        printf("dosyalar okunuyor...\n");

        dosya=fopen("tekcýft.txt","r");
        do
        {
            karakter=fgetc(dosya);
            if(karakter !=EOF)
            {
                putchar(karakter);
            }
        }while(karakter !=EOF);

    fclose(dosya);
    printf("yazma islemi tamamlandi\n");

    return 0;
}
