#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *parq;
    char palavra;
    parq=fopen("Lim�o.txt", "r");
    printf("Limao = ");
    while(palavra=fgetc(parq)!=EOF)
    printf("%c", palavra);
    fclose(parq);
    getch();
    return 0;
}
