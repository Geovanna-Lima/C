#include<stdio.h>
#include<conio.h>
#include<iostream>

int main()
{
    system ("color 1f");
    int curso;
    printf("Digite o numero do curso: \n");
    scanf("%d", &curso);
    switch(curso){
        case 1: printf("informatica");break;
        case 2: printf("eletronica");break;
        case 3: printf("eletrotecnica");break;
        case 4: printf("mecanica");break;
        default: printf("Curso invalido");
    }
    getch();
    return 0;
}

