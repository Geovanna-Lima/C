#include<stdio.h>
#include<conio.h>

int main()
{
	int a[9], b[9], i, j;
		printf("Insira cada digito do RA:\n");
	for(i=0; i<=8; i++)
	{
		scanf("%d", &a[i]);
	}
		for(i=0; i<=8; i++)
		{
		b[i]=a[i];
		}
	 	b[0]=a[1];
	 	b[1]=a[0];
	 	b[7]=a[8];
	 	b[8]=a[7];
	 	for(i=0; i<=8; i++)
	 	printf("O novo RA eh:%d\n", b[i]);
	 	
	getch();
	return 0;
}


