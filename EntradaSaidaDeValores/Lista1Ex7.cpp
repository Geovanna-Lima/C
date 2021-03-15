#include<stdio.h>
#include<conio.h>

int main (){
    int Custo, NCoelhos;
    printf("Digite Ncoelhos:\n");
    scanf("%d", &NCoelhos);
    Custo=((NCoelhos*0.70)/18)+10;
    printf("Custo: %d", Custo);
    
    getch();
    return 0;
}
