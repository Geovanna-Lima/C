#include<stdio.h>
#include<conio.h>

int main(){
	float S, Tempo, So, Vo, A;
	So=2.0;
	Vo=3.0;
	A=10.0;
	printf("Digite o tempo (segundos): \n");
	scanf("%f", &Tempo);
    S=(So+Vo)*Tempo+((A/2)*(Tempo*Tempo));
	printf("O valor do movimento uniforme variado e: %6.2f", S);
	
	getch();
	return 0;
}
