#include<stdio.h>
#include<conio.h>

int main()
{
    int time;
    printf("Digite o numero do time: \n");
    scanf("%d", &time);
    switch(time){
    case 1: printf("Santos"); break;
    case 2: printf("Conrinthians"); break;
    case 3: printf("Palmeiras"); break;
    case 4: printf("Sao Paulo"); break;
    case 5: printf("São Caetano"); break;
    default: printf("Time invalido");
}
    
    getch();
    return 0;
}
    
