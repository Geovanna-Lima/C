#include<stdio.h>
#include<conio.h>

int main(){
	int A, B;
	printf("Digite o valor A: \n");
	scanf("%d",&A);
	printf("Digite o valor de B: \n");
	scanf("%d", &B);
	A=A+B;
	B=A-B;
	A=A-B;
	printf("Novo valor A: %d\n", A);
	printf("Novo valor B: %d", B);
	
	getch();
	return 0;
	}
