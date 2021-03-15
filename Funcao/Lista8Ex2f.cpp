#include<stdio.h>
#include<conio.h>

int a=1, b=0;
int Fibonacci(int c, int cont, int x)
{
	printf("A sequencia e:\n");
	for(cont=1; cont<=x; cont++)
	{
		printf("%d\n", a);
		c=b;
		b=a;
		a=b+c;
	}
}
int main ()
{
	int x, c, cont;
	printf("Entre com a quantidade de numeros que voce quer da sequencia:\n");
	scanf("%d", &x);
	Fibonacci (c, cont,x);
	getch ();
	return 0;
}
