#include <stdio.h>
#include <stdlib.h>
//KULLANICIDAN ALINAN VE METÝN BELGESINE EKLENEN VERIYI N DEFA ALT ALTA YAZDIRMA
int main()
{
    FILE *dosya;
    dosya=fopen("metinBelgesi.txt","w");
    char cumle[100];
    int N,i;

    if(dosya==NULL)
    {
        printf("dosya olusturulamadi");
    }
    else
    {
        printf("olusturulacak cumleyi girin\n");
        gets(cumle);
        printf("tekar sayisini girin\n");
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            fprintf(dosya,"%d. satir: cumle: %s\n",i,cumle);
        }
        fclose(dosya);
        printf("islem tamamlandi");

    }

    return 0;
}
