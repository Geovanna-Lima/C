#include<stdio.h>
#include<conio.h>

int soma(int *x)
{
	int conta=0, cont;
	for(cont=1; cont<=*x; cont++)
	conta=conta+cont;
	printf("A soma obtida do numeros inteiro e:\n%d ", conta);
}
int main ()
{
   int x, *px;
   printf("Entre com o numero que vai ser calculado:\n");
   scanf("%d", &x);
   px=&x;
   soma(px);  
   getch();
   return 0;
}
