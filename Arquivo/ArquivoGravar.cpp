#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *parq;
    char palavra[20];
    parq=fopen("Limão.txt", "w");
    printf("Escreva uma palavra:\n");
    scanf("%s", palavra);
    fprintf(parq, "%s", palavra);
    fclose(parq);
    return 0;
}
