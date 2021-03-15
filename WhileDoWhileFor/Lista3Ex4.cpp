#include <stdio.h>
#include<conio.h>


int main ()
{
	int cont, N=1;
	printf("Digite um numero ate 50 para ser multiplicado por 3: \n");
	scanf("%d", &N);
	if(N<=50)
	{
    	while(N<=250)
    	{
            N=N*3;
            printf("%d\n", N);
        }
    }
    else
    printf("Numero invalido!");

    getch();
    return 0;
}
