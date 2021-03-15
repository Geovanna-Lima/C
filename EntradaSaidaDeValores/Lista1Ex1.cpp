#include<stdio.h>
#include<conio.h>

int main()
{
	float dis, t, veloc, litusa;
	printf("Entre com o tempo:\n");
	scanf("%f", &t);
	printf("Entre com velocidade:\n");
	scanf("%f", &veloc);
	dis=t*veloc;
	litusa=dis/12;
	printf("Os valores sao: %6.2f %6.2f %6.2f %6.2f", t, veloc, dis, litusa);
	
	getch();
	return 0;
}
