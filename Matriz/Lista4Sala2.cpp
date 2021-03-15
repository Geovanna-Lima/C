#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6], b[6], i;
	for(i=0; i<=5; i++)
	{
		printf("Entre com os valores do fatorial:\n");
		scanf("%d",&a[i]);
	}
	for(i=0; i<=5; i++)
	{
		for(b[i]=a[i]; a[i]>1; a[i]--)
		{
            b[i]=b[i] * (a[i]-1);
        }
        printf("O fatorial eh:%d\n", b[i]);
    }
    getch ();
    return 0;
}
	
