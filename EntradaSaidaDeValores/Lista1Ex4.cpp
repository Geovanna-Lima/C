#include<stdio.h>
#include<conio.h>

int main() {
	float A, B, X;
	printf("Digite A: \n");
	scanf("%f", &A);
	printf("Digite B: \n");
	scanf("%f", &B);
	X=A;
	A=B;
	B=X;
	printf("O valor de A e: %6.2f", A);
	printf(" e o valor de B e: %6.2f", B);
	
	getch();
	return 0;
}
