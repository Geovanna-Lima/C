#include<conio.h>
#include<stdio.h>
#include<string.h>

int i, j;
float n,md;
int menu=0;
char nm[60];
int cadastro();
int pesquisa();
int classificacao();
int alteracao();
struct cad
{
   char nome[60];
   float nota1, nota2, nota3, nota4, nota, media;
};
struct cad x[20], aux;

int cadastro()
{
	printf("Faca o cadastro!\n");
    //Cadastro//
    for(i = 0; i <=19; i++)
    {
    fflush(stdin);
    printf("Entre com o nome:\n");
    fgets(x[i].nome, 60, stdin);
    printf("Entre com a nota 1:\n");
    scanf("%f", &x[i].nota1);
    fflush(stdin);
    printf("Entre com a nota 2:\n");
    scanf("%f", &x[i].nota2);
    fflush(stdin);
    printf("Entre com a nota 3:\n");
    scanf("%f", &x[i].nota3);
    fflush(stdin);
    printf("Entre com a nota 4:\n");
    scanf("%f", &x[i].nota4);
   	x[i].media=(x[i].nota1+x[i].nota2+x[i].nota3+x[i].nota4)/4;
    }
}
int classificacao()
{
    //Classificacao nota//
    printf("Classificacao dos alunos!\n");
    for(i=0; i<=18; i++)
        for(j=i+1; j<=19; j++)
        if(x[i].media < x[j].media)
        {
            aux = x[i];
            x[i] = x[j];
            x[j] = aux;
        }
        printf("A ordem e:\n");
        for(i=0; i<=19; i++)
        {
            printf("Nome:%sMedia Final:%.2f\n",x[i].nome,x[i].media);
        }	        	
}
int alteracao()
{
    //Alteracao//
    printf("Alteracao de cadastro!\n");
    printf ("Entre com o nome do aluno e/ou nota a ser alterada:");
    fflush(stdin);
    fgets(nm, 60, stdin)||scanf("%d", &n);
    fflush(stdin);
    i=0;
    while(i<=19)
    {
	  if((strcmp(nm, x[i].nome)==0)||(n==x[i].nota))
     break;
      else
      i++;
    }
    fflush(stdin);
    printf("Entre com o nome:\n");
    fgets(x[i].nome, 60, stdin);
    printf("Entre com a nota 1:\n");
    scanf("%f", &x[i].nota1);
    fflush(stdin);
    printf("Entre com a nota 2:\n");
    scanf("%f", &x[i].nota2);
	fflush(stdin);
    printf("Entre com a nota 3:\n");
    scanf("%f", &x[i].nota3);
    fflush(stdin);
    printf("Entre com a nota 4:\n");
    scanf("%f", &x[i].nota4);
}
int pesquisa()
{
    //Pesquisa//
    printf("Pesquisa!\n");
    printf("Entre com o nome a ser pesquisado:\n");
    fflush(stdin);
    fgets(nm,60,stdin);
    fflush(stdin);
    i = 0;
    while(i<=19)
    {
    	fflush(stdin);
        if(strcmp(nm, x[i].nome)==0)
        {
            printf("Nome:%sEncontrado na posicao:%d",x[i].nome, i+1);
        }
        else
        {
        	printf("Nome nao encontrado!");
		}
		break;
    }
}
int aprovados()
{
    //Aprovados//
    printf("Alunos aprovados!\n");
    printf ("Os alunos aprovados sao:\n");
    for(i=0; i<=19; i++)
    {
        if(x[i].media>=7)
        {
    	   printf("Nome:%sMedia Final:%.2f\n",x[i].nome, x[i].media);
 	    }
   }
   if((x[i].media>=7)==0)
   {
       printf("Nunhum aluno aprovado!");
   }
}
int reprovados()
{
   //Reprovados//
   printf("Alunos reprovados!\n");
   printf("Os alunos reprovados sao:\n");	
   for(i=0; i<=19; i++)
   {
        if(x[i].media<7)
        {
           printf("Nome:%sMedia Final:%.2f\n",x[i].nome, x[i].media);
	    }
	}
       if((x[i].media<7)==0)
	    {
	       printf("Nunhum aluno reprovado!");
	    }
}
int main()
{
	while(menu != 7)
    {
	   //Opcao menu//
       printf("\nEntre com um numero para realizar a opcao:\n 1-Cadastro \n 2-Classificacao\n 3-Correcao de cadastro \n 4-Pesquisa\n 5-Lista de aprovados\n 6-Lista de reprovados\n");
       printf("--------------------------------------------------------------------------------\n");
       scanf("%d", &menu);	

        switch (menu)
		{
			case 1:cadastro(); break;
		    case 2:classificacao(); break;
			case 3:alteracao(); break;
			case 4:pesquisa(); break;
			case 5:aprovados(); break;
			case 6:reprovados(); break;
		}
	}

    getch ();
    return 0;
}
