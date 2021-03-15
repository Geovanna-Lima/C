#include<stdio.h>
#include<conio.h>


int main ()
{
	int a;
	a=1;
	do
	{
		if(a%2==0)
		{
			printf("Numero par: %d\n", a);
		}	
		else
			printf("Numero impar: %d\n", a);
		
		a++;
	}
	while(a<=20);
	getch ();
	return 0;
	
}
	
