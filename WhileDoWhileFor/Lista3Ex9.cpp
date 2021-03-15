#include<stdio.h>
#include<conio.h>

int main ()
{
	int n,m=0,cont,x, y;
	printf("Digite um numero para ser a base da potencia:\n");
	scanf("%d", &n);
	y = n;
	printf("Digite um numero para ser o Expoente da potencia:\n");
	scanf("%d", &cont);
	for(x=1; x<cont; x++)
	{
		n=n*y;
		printf("Esses numeros elevados a %d e:\n", x+1);
		printf("%d\n", n);
		
	}
	getch ();
	return 0;
}
