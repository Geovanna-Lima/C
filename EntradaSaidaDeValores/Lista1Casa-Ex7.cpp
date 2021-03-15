#include<stdio.h>
#include<conio.h>

int main(){
	float Area, Volume, Raio;
	printf("Digite o raio da esfera: \n");
	scanf("%f", &Raio);
	Volume=(4*3.1416*(Raio*Raio*Raio))/3;
	Area=4*3.1416*(Raio*Raio);
	printf("O volume da esfera e: %6.2f\n", Volume);
	printf("A area da esfera e: %6.2f", Area);
	
	getch ();
	return 0;
	}
