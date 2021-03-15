#include<stdio.h>
#include<conio.h>

int main ()
{
	int a=0,cont;
	for(cont=1;cont<=500;cont++)
	{
		if(cont%2==0)
		{
		a=cont+a;
		}
			
	}printf("A soma dos numeros e de: \n%d", a);
	getch();
	return 0;
}
