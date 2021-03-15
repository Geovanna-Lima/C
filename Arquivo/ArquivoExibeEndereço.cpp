#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *parq;
    int num, i=1;
    parq = fopen("arquivo.txt", "w");
    for(i=1; i<=5; i++)
    {
        printf("Digite o %d valor:\n", i);
        fflush(stdin);
        scanf("%d", &num);
        fprintf(parq, "%d° valor:%d\n", i, num);
    }
    fclose(parq);
    getch();
}
