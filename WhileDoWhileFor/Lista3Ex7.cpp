#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int a, cont;
	for(cont=0; cont<=15; cont++)
	{
		a=pow(3,cont);
		printf("%d\n", a);
	}
	getch ();
	return 0;
}
