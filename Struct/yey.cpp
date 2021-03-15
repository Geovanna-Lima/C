#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int meniu=0, acha, i, j, p[6];
    char nome[60], cr[20];
    while(meniu!=5)
    {
        printf(" entre com o numero da tarefa a ser realizado \n 1-cadastro. \n 2- pesquisa pela cor do carro. \n 3- ordem alfabetica. \n 4-alteracao. \n 5- sair");
        scanf("%d", &meniu);
        struct cad
        {
            char nome[60], cor[20];
            float preco;
            int pl[6];
        };
        struct cad x[5], aux;
        switch (meniu)
        {
            
            case 1: 
            printf("faca o cadastro.");
            //cadastro//
            for(i=0; i<=4; i++)
            {
                fflush(stdin);
                printf("entre com o modelo:\n");
                fgets(x[i].nome, 60, stdin);
                printf("entre com a cor do veiculo:\n");
                fflush(stdin);
                fgets(x[i].cor, 20, stdin);
                printf("entre com a placa do veiculo:\n");
                scanf("%d", &x[i].pl);
                printf("entre com o preco:\n");
                scanf("%i", &x[i].preco);
            }
            break;
            //pesquisa//
            case 2:
            {
                
                printf("pesquisa!\n");
                printf("entre com a cor do veiculo a ser pesquisada");
                fgets(cr, 20, stdin);
                i=0;
                while(i<=4)
                {
                    if(cr==x[i].cor)
                    acha=1;
                    else
                    {
                        acha=0;
                        i++;
                    }
                }
                if(acha==1)
                printf("%s na posicao %d", cr, i+1);
                else
                printf("nao encontrado \n");
            }
            break;
            //ordenacao//
            case 3:
            printf("ordem alfabetica");
            for(i=0;i<=3;i++)
            for(j=i+1;j<=4;j++)
            if(strcmp(x[i].nome, x[j].nome)>0)
            {
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
            for(i=0;i<=4;i++)
            {
                printf("os modelos em ordem alfabetica sao:\n",i);
            }
            break;
            //alteração//
            case 4:
            {
                printf("alteracao!");
                printf("entre com a placa do veiculo a ser alterada:\n");
                scanf("%d", &p);
                i=0;
                while(i<=4)
                {
                    if(p==x[i].pl)
                    break;
                    else
                    i++;
                }
                for(i=0; i<=4; i++)
                {
                    fflush(stdin);
                    printf("entre com o modelo:\n");
                    fgets(x[i].nome, 60, stdin);
                    printf("entre com a cor do veiculo:\n");
                    fflush(stdin);
                    fgets(x[i].cor, 20, stdin);
                    printf("entre com a placa do veiculo:\n");
                    scanf("%d", &x[i].pl);
                    printf("entre com o preco:\n");
                    scanf("%i", &x[i].preco);
                }
            }
            break;
        }
    }
    getch();
    return 0;
}
