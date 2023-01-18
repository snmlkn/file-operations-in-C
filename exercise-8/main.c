#include <stdio.h>
#include <stdlib.h>
//N ADET OGRENCININ DERS NOTLARI VE ORTALAMALARININ TUTULDUGU PROGRAM

struct student
{
    char name_sur[30];
    char lesson[20];
    int note1,note2,note3;
} ;
int main()
{
    int N,i;
    float ave;
    printf("how many student recorded ?\n");
    scanf("%d",&N);
    struct student std[N];
    FILE *file;
    file=fopen("note_document.txt","w");
    if(file==NULL)
    {
        printf("file not found");
    }
    else
    {
        for(i=0; i<N; i++)
        {
            fflush(stdin);
            printf("enter student name-Surname: ");
            gets(std[i].name_sur);
            printf("enter lesson name: ");
            gets(std[i].lesson);
            printf("enter note 1: ");
            scanf("%d",&std[i].note1);
            printf("enter note 2: ");
            scanf("%d",&std[i].note2);
            printf("enter note 3: ");
            scanf("%d",&std[i].note3);
            ave=(float) std[i].note1*0.2+(float) std[i].note2*0.2+(float) std[i].note3*0.6;
            fprintf(file,"%s \t %s \t %d \t %d \t %d \t %.2f\n",std[i].name_sur,std[i].lesson,std[i].note1,std[i].note2,std[i].note3,ave);

        }
        fclose(file);
        printf("\n\nprocces succesfully comlated...");
    }


    return 0;
}
