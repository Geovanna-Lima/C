#include<conio.h>
#include<stdio.h>
#include<string.h>

int i, j, id;
int menu=0;
char nm[60];
int cadastro();
int pesquisa();
int classificacao();
int alteracao();
struct cad
{
   char nome[60], end[60], tel[13];
   int idade;
};
struct cad x[5], aux;

int cadastro()
{
	printf("Faca o cadastro!\n");
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
}
int pesquisa()
{
    //Pesquisa//
    printf("Pesquisa!\n");
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
}
int classificacao()
{
    //Ordem Alfabetica//
    printf("Classificacao alfabetica!\n");
    for(i=0; i<=3; i++)
        for(j=i+1; j<=4; j++)
        if(strcmp(x[i].nome, x[j].nome)>0)
        {
            aux = x[i];
            x[i] = x[j];
            x[j] = aux;
        }
        printf("A ordem e:\n");
        for(i=0; i<=4; i++)
        {
            printf("%s",x[i].nome);
        }
	        	
}
int alteracao()
{
    //Alteracao//
    printf("Alteracao de cadastro!\n");
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
}
int remocao()
{
    //Remocao//
    printf("Remocao de cadastro!\n");
    printf ("Entre com o nome do cadastro a ser removido:\n");
    fflush(stdin);
    fgets(nm, 60, stdin);
    for(i=0; i<=4;i++)
    {
	   if(strcmp(nm, x[i].nome)==0)
       break;
    }
    printf("Aperte ENTER 4X!\n");
    fgets(x[i].nome, 60, stdin);
    scanf("%d", &x[i].idade);
    fgets(x[i].end, 60, stdin);
    fgets(x[i].tel, 13, stdin);
    printf("Cadastro removido!");
}
int main()
{
	while(menu != 5)
    {
	   //Opcao menu//
       printf("Entre com um numero para realizar a opcao:\n 1-Cadastro \n 2-Pesquisa\n 3-Classificacao alfabetica\n 4-Alteracao de resgistro\n 5-Remocao de cadastro\n");
       printf("--------------------------------------------------------------------------------\n");
       scanf("%d", &menu);	

        switch (menu)
		{
			case 1:cadastro(); break;
		    case 2:pesquisa(); break;
			case 3:classificacao(); break;
			case 4:alteracao(); break;
			case 5:remocao(); break;
		}
	}

    getch ();
    return 0;
}
