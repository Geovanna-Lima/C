#include<stdio.h>
#include<conio.h>
#include<math.h>

int potencia(int base, int exp)
{
	int result=pow(base,exp);
	printf("O resultado e:\n%d", result);
	
}
int main ()
{
	int base, exp;
	printf("Digite um numero para ser a base da potencia:\n");
	scanf("%d", &base);	
	printf("Digite um numero para ser o Expoente da potencia:\n");
	scanf("%d", &exp);
	potencia(base, exp);
	getch ();
	return 0;
}
