#include <stdio.h>
#include <stdlib.h>
//ISMI VE UZANTISI VERILEN DOSYANIN ICINI OKUYUP KONSOLA BASTIRAN PROGRAM
int main()
{
    FILE *file;
    char line[100],fileName[30];
    char *character;
    printf("enter file name and extension(file.eks)\n");
    gets(fileName);
    file=fopen(fileName,"r");
    if(file == NULL)
    {
        printf("file not found");
    }
    else
    {
        do
        {
            character=fgets(line,100,file);
            if(character != NULL)
            {
                printf("%s",line);
            }
        }while(character != NULL);
        fclose(file);
    }
    return 0;
}
