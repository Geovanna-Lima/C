#include<stdio.h>
#include<conio.h>


int main ()
{
	int a;
	int b;
	printf("Insira um valor para ser multiplicado: \n");
	scanf("%d", &b);
	for(a=0; a<=10; a=a+1)
	{
		printf("%d * %d = %d\n", a, b, (b * a));
	}
	getch ();
	return 0;
}
