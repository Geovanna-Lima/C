#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[10], b[10][3], i, j, fat;
	//Colocando A//
	printf("Entre com os valores da matriz A:\n");
	for(i=1; i<=10; i++)
	{
		scanf("%d", &a[i]); 
	}
	for(i=1; i<=10; i++)
	 {
	 	b[i][0] = a[i]+5;
	 	  fat = 1;
	 	for(j = a[i]; j > 1; j--)
	 	{
        	fat = fat * j; 
        }
         b[i][1] = fat;
       
        b[i][2] = pow(a[i],3);
    }
        for(i=1; i<=10; i++)
			for(j=0; j<3; j++)
			{
				printf("Os valores de B=[%d][%d] sao: %d\n",i, j, b[i][j]);
     		}
     		getch();
     		return 0;
}
