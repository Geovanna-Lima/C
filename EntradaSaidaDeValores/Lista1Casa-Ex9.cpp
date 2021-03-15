#include<stdio.h>
#include<conio.h>

int main(){
	float P1, P2, Media, Atividade;
	printf("Digite a nota da prova 1: \n");
	scanf("%f", &P1);
	printf("Digite a nota da prova 2: \n");
	scanf("%f", &P2);
	printf("Digite a nota das atividades do semestre: \n");
	scanf("%f", &Atividade);
	Media=((P1*4)+(P2*4)+(Atividade*2))/10;
	printf("A media final e: %6.2f", Media);
	
	getch();
	return 0;
}
