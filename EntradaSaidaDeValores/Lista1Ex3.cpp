#include<stdio.h>
#include<conio.h>

int main(){
	float vol, R, H;
	printf("Digite altura da lata: \n");
	scanf("%f", &H);
	printf("Digite o raio da lata: \n");
	scanf("%f", &R);
	vol=3.14159*R*R*H;
	printf("O volume da lata e: %6.2f", vol);
	getch();
	return 0;
}
