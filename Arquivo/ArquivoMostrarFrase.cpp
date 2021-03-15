#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *parq;
    char frase[81];
    parq=fopen("frase.txt", "r");
    while(fgets(frase, 81, parq)!=NULL)
    printf("%s",frase);
    fclose(parq);
    getch();
    return 0;
}
