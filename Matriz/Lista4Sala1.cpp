#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], i;
	for (i=0; i<=4; i++)
	{
		printf("Entre com um valor:\n");
		scanf("%d", &a[i]);
		b[i]=a[i]*3;
		printf("O resultado eh: %d\n", b[i]);
	}
	getch ();
	return 0;
}
