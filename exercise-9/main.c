#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
//0-360 ARASI ACILARI RADYAN CINSINDEN SIN-COS DEGERLERINI ACILAR.TXT DOSYASINA KAYDEDEN PROGRAM
int main()
{
    double sinus,cosinus;
    int i;
    FILE *file;
    file=fopen("angular.txt","w");

    if(file == NULL)
    {
        printf("null file");
    }
    else
    {
        fprintf(file,"VALUE\t  SIN\t \t  COS\n");
        fprintf(file,"=================================\n");
        for(i=0;i<=360;i++)
        {
            sinus=sin(PI*i/180);
            cosinus=cos(PI*i/180);
            fprintf(file,"%d\t%lf\t%lf\n",i,sinus,cosinus);
        }
    }
    return 0;
}
