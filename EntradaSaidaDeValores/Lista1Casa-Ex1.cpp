#include<stdio.h>
#include<conio.h>

int main(){
	float Dolar, RL;
	printf("Digite o valor em Real para conversao:\n");
	scanf("%f", &RL);
	Dolar=RL/2.40;
	printf("O valor em Dolares e: %6.2f", Dolar);
	
	getch();
	return 0;
}
