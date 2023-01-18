#include <stdio.h>
#include <stdlib.h>
//IKI DOSYADAKI VERILERI BIRLESTIRME
int main()
{
    char character;
    FILE *d1,*d2,*d3;
    d1=fopen("veri1.txt","r");
    d2=fopen("veri2.txt","r");
    d3=fopen("birlestir.txt","w");
    if(d1 == NULL || d2 == NULL || d3 == NULL)
    {
        printf("dosya bulunamadi\n");
    }
    else
    {
        do
        {
            character=getc(d1);
            if(character!=EOF)
            {
                fprintf(d3,"%c",character);
            }

        }
        while(character != EOF);
        fprintf(d3,"\n\n");
        do
        {
            character=getc(d2);
            if(character!=EOF)
            {
                fprintf(d3,"%c",character);
            }

        }
        while(character != EOF);
        fclose(d1);
        fclose(d2);
        fclose(d3);
        printf("complated...");
    }

    return 0;
}
