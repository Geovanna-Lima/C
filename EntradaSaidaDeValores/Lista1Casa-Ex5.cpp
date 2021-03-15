#include<stdio.h>
#include<conio.h>

int main(){
	float IMC, Massa, Altura;
	printf("Digite a massa(kg): \n");
	scanf("%f", &Massa);
	printf("Digite a altuar(m): \n");
	scanf("%f", &Altura);
	IMC=Massa/(Altura*Altura);
	printf("O IMC resultante e: %6.2f", IMC);
	
	getch();
	return 0;
	}
