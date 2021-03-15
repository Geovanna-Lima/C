#include<stdio.h>
#include<conio.h>

int main(){
	float Area, Comp, Raio;
	printf("Digite o raio da Circunferencia: \n");
	scanf("%f", &Raio);
	Area=3.1416*(Raio*Raio);
	printf("A area do circulo e: %6.2f", Area);
	
	getch();
	return 0;
}
