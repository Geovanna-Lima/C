#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
    int menu=0;
    int i, j, id;
    char nm[60];
    while(menu != 5)
    {
    //Opcao menu//
    printf("--------------------------------------------------------------------------------");
    printf("Entre com um numero para realizar a opcao:\n 1-Cadastro e registro\n 2-Pesquisa de registro\n 3-Classificacao alfabetica\n 4-Alteracao de resgistro\n 5 e enter 2x-Sair\n");
    printf("--------------------------------------------------------------------------------");
    scanf("%d", &menu);
    switch(menu)
    {
        case 1: printf("Faca o cadastro!\n");
        struct cad
        {
            char nome[60], end[60], tel[13];
            int idade;
        };
        struct cad x[5], aux;
        //Cadastro//
        for(i = 0; i <=4; i++)
        {
            fflush(stdin);
                printf("Entre com o nome:\n");
            fgets(x[i].nome, 60, stdin);
                printf("Entre com a idade:\n");
                scanf("%d", &x[i].idade);
            fflush(stdin);
                printf("Entre com o endereco:\n");
            fgets(x[i].end, 60, stdin);
                printf("Entre com o telefone:\n");
            fgets(x[i].tel, 13, stdin);
        }
        break;
        //Pesquisa//
        case 2:  printf("Pesquisa!\n");
            printf("Entre com a idade a ser pesquisada:");
            scanf("%d", &id);
            i = 0;
            while(i<=4)
        {
            if(id==x[i].idade)
            {
                printf("A posicao eh:%d\n", i+1);break;
            }
            else
            i++;
        }
        break;
        //Ordem Alfabetica//
        case 3: printf("Classificaçao alfabetica");
             for(i=0; i<=3; i++)
                 for(j=i+1; j<=4; j++)
                     if(strcmp(x[i].nome, x[j].nome)>0)
                     {
                       aux = x[i];
                       x[i] = x[j];
                       x[j] = aux;
                    }
                        for(i=0; i<=4; i++)
                         {
                            printf("Os nomes em ordem alfabetica sao:\n%s",x[i].nome);
                         }
        break;
        //Alteracao//
        case 4: printf("Alteracao de cadastro!\n");
                printf ("Entre com o nome do cadastro a ser alterado:");
                fflush(stdin);
                fgets(nm, 60, stdin);
                 i=0;
                while(i<=4)
                {
                    if(strcmp(nm, x[i].nome)==0)
                    break;
                    else
                    i++;
                }
                    fflush(stdin);
                        printf("Entre com o nome:\n");
                            fgets(x[i].nome, 60, stdin);
                        printf("Entre com a idade:\n");
                            scanf("%d", &x[i].idade);
                    fflush(stdin);
                        printf("Entre com o endereco:\n");
                            fgets(x[i].end, 60, stdin);
                        printf("Entre com o telefone:\n");
                            fgets(x[i].tel, 13, stdin);
        break;        
    } 
}
    getch ();
    return 0;

}
