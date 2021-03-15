#include<stdio.h>
#include<conio.h>

int main(){
	float N1, N2, N3, N4, Media;
	printf("Digite a nota do primeiro bimestre: \n");
	scanf("%f", &N1);
	printf("Digite a nota do segundo bimestre: \n");
	scanf("%f", &N2);
	printf("Digite a nota do terceiro bimestre: \n");
	scanf("%f", &N3);
	printf("Digite a nota do quarto bimestre: \n");
	scanf("%f", &N4);
	Media=(N1+N2+N3+N4)/4;
	printf("A media final e: %6.2f", Media);
	
	getch();
	return 0;
}
