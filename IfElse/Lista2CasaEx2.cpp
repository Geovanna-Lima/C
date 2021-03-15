#include<stdio.h>
#include<conio.h>

int main()
{
	int Numero, N_Chave;
	printf("Digite um numero entre 0 e 100: \n");
	scanf("%d", &Numero);
	N_Chave=15;
	if((Numero>=0)&&(Numero<=100)){
		Numero=Numero-N_Chave;
		if(Numero<0)
		   Numero=(Numero*-1);
		  	printf("A distancia do numero digitado e o numero chave e de: %d \n", Numero);}
	else
	   printf("Numero digitado incorreto!");
	getch();
	return 0;		
}
