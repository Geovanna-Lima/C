#include<stdio.h>
#include<conio.h>

int main()
{
	int mes;
	printf("Digite um numero para mostar o mes:\n");
	scanf("%d", &mes);
	switch (mes)
	{
		case 1: printf("Esse mes eh Janeiro!");break;
		case 2: printf("Esse mes eh Fevereiro!");break;
		case 3: printf("Esse mes eh Marco!");break;
		case 4: printf("Esse mes eh Abril!");break;
		case 5: printf("Esse mes eh Maio!");break;
		case 6: printf("Esse mes eh Junho!");break;
		case 7: printf("Esse mes eh Julho!");break;
		case 8: printf("Esse mes eh Agosto!");break;
		case 9: printf("Esse mes eh Setembro!");break;
		case 10: printf("Esse mes eh Outubro!");break;
		case 11: printf("Esse mes eh Novembro!");break;
		case 12: printf("Esse mes eh Dezembro!");break;
		default: printf("Esse numero e invalido!");
	}
	getch ();
	return 0;
}
