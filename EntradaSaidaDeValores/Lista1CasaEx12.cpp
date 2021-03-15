#include<stdio.h>
#include<conio.h>

int main(){
	float despaco, dtempo, vm, sfinal, sinicial, tfinal, tinicial;
	printf("Digite o espaco inicial do corpo: \n");
	scanf("%f", &sinicial);
	printf("Digite o espaco final do corpo: \n");
	scanf("%f", &sfinal);
	printf("Digite o tempo inicial do corpo: \n");
	scanf("%f", &tinicial);
	printf("Digite o tempo final do corpo: \n");
	scanf("%f", &tfinal);
	dtempo=tfinal-tinicial;
	despaco=sfinal-sinicial;
	vm=despaco/dtempo;
	printf("A velocidade media e: %6.2f", vm);
	getch ();
	return 0;
}
