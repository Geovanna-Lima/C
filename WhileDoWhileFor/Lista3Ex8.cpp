#include<stdio.h>
#include<conio.h>

int main ()
{
	int a=1, b=0, c, cont;
	for(cont=1; cont<=15; cont++)
	{
		printf("%d\n", a);
		c=b;
		b=a;
		a=b+c;
	}
	getch ();
	return 0;
}
