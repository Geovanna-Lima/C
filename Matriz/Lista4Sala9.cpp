#include<stdio.h>
#include<conio.h>

int main()
{
	int curso;
	printf("Entre com um numero para exibir o curso:\n");
	scanf("%d", &curso);
	switch(curso)
	{
		case 1: printf("Esse curso eh Engenharia!");break;
		case 2: printf("Esse curso eh Edificacoes!");break;
		case 3: printf("Esse curso eh Sistemas Eletronicos!");break;
		case 4: printf("Esse curso eh Turismo!");break;
		case 5: printf("Esse curso eh Analise de Sistemas!");break;
		default: printf("Numero invalido!");
	}
	getch();
	return 0;
}
