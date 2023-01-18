#include <stdio.h>
#include <stdlib.h>
//KLAVYEDEN GIRILEN DEGERLERI DOSYAYA KAYDETME
/*
klavyeden 0 deðeri girilene kadar girilen kelimeleri dosyaya kaydetme
*/
int main()
{
    char word[30];
    FILE *file;
    file=fopen("word.txt","a");
    printf("PROGRAM:\n");
    if(file == NULL)
    {
        printf("file not found");
    }
    else
    {
        do
        {
            printf("enter the word:\n");
            gets(word);
            if(word[0] == '0')
            {
                exit(1);
            }
            fprintf(file,"%s\n",word);
        }while(1);

    }
    return 0;
}
