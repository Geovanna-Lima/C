#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float A,B,C,X1,X2, Delta;
	printf("Equacao do 2 grau! \n ");
	printf("Digite o coeficiente A: \n");
	scanf("%f", &A);
	printf("Digite o coeficiente B: \n");
	scanf("%f", &B);
	printf("Digite o coeficiente C: \n");
	scanf("%f", &C);
	if(A!=0){
	  Delta=(pow(B,2)-(4*A*C));
	  if(Delta<0)
	     printf("A equacao nao tem solucao!");
    else
    	if(Delta==0){
        X1=((-B)/2*A);
        X2=X1;
		printf("A equacao tem duas raizes reais e iguais: %6.2f %6.2f \n", X1, X2);}
	else{
		X1=(-B+sqrt(Delta))/2*A;
		X2=(-B-sqrt(Delta))/2*A;
		printf("A equacao tem duas raizes reais e diferentes: %6.2f %6.2f\n", X1, X2);}}
	else
	    printf("Não é uma equacao do segundo grau!");
	
	getch();
	return 0;
}
