#include<stdio.h>
#include<conio.h>

int main(){
	float A, B, Area, Perimetro;
	printf("Digite a medida do lado A do retangulo: \n");
	scanf("%f", &A);
	printf("Digite a medida do lado B do retangulo: \n");
	scanf("%f", &B);
	Area=(A*B);
	printf("Area total do retangulo: %6.2f\n", Area);
	Perimetro=(2*A)+(2*B);
    printf("Perimetro do Retangulo: %6.2f\n", Perimetro);
	
	getch ();
	return 0;
}
