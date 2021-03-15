#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *parq;
    char resp, frase[81];
    resp = 'S';
    parq=fopen("frase.txt", "w");
    while(resp=='S'||resp=='s')
    {
        printf("Digite uma frase qualquer:\n");
        fflush(stdin);
        fgets(frase, 81, stdin);
        fputs(frase, parq);
        printf("Deseja continuar (S/N)?");
        fflush(stdin);
        scanf("%c", &resp);
    }
    fclose(parq);
    getch();
    return 0;
}
