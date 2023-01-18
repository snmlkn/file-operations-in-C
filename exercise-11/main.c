#include <stdio.h>
#include <stdlib.h>
//DOSYAYI BELIRTILRN ADRESE YEDEKLEME
/*
kaynak.txt dosyasýnda bulunan verileri hedef.txt dosyasýna yedekleyen program
*/
int main()
{
    FILE *input,*output;
    char source[50],target[50],character;
    printf("enter source file name\n");
    gets(source);
    input=fopen(source,"r");
    if(input == NULL)
    {
        printf("file not found");
        exit(1);
    }

    printf("enter target file name\n");
    gets(target);
    output=fopen(target,"w");
    if(output == NULL)
    {
        printf("file not found");
        exit(1);
    }

    for(character=getc(input);character != EOF;character=getc(input))
    {
        putc(character,output);
    }

    fclose(input);
    fclose(output);
    printf("backup comlated....");
    return 0;
}
