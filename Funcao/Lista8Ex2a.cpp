#include<stdio.h>
#include<conio.h>
#include<locale.h>

int x=0;
int soma(int cont, int conta)
{
	for(cont=1; cont<=conta; cont++)
    {
        x=x+cont;
    }
    printf("A soma da soma obtido do numero inteiro digitado é:\n%d ", x);
    return 0;
}
int main()
{
	setlocale(LC_ALL,"portuguese");
	int conta, cont;
    printf("Entre com um valor:\n");
    scanf("%d", &conta);
    soma(cont, conta);
    
    getch();
    return 0;
    
}
