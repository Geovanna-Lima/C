#include<stdio.h>
#include<conio.h>

int main ()
{ 
int a;
for(a=1; a<=20; a++)
{
	if(a%2==0)
	printf("Numero par: %d\n", a);
	else
	printf("Numero impar: %d\n", a);
}
getch();
return 0;
}
