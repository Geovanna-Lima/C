#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *parq;
    char palavra[20];
    parq=fopen("Lim�o.txt", "r");
    fscanf(parq, "%s", palavra);
    printf("Palavra do Arquivo = %s", palavra);
    fclose(parq);
    getch();
    return 0;
}
