#include<stdio.h>
#include<conio.h>

int main(){
	float RL, Dolar;
	printf("Digite o valor em dolares para conversao: \n");
	scanf("%f", &Dolar);
	RL=Dolar*2.40;
	printf("O valor em reais e: %6.2f", RL);
	
	getch();
	return 0;
}
