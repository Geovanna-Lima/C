#include<stdio.h>
#include<conio.h>

int main(){
    float PAtraso, PValor, Taxa, Tempo;
    printf("Digite o valor da prestacao: \n");
    scanf("%f", &PValor);
    printf("Digite o valor da taxa de juros: \n");
    scanf("%f", &Taxa);
    printf("Digite o tempo em atraso: \n");
    scanf("%f", &Tempo);
    PAtraso=PValor+(PValor*(Tempo/100)*Tempo);
    printf("O valor da prestacao e:\n%6.2f", PAtraso);
    getch();
    return 0;
}
