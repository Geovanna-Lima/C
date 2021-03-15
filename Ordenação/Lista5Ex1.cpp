#include<stdio.h>
#include<conio.h>

int main()
{
    int a[12], i,j,x;
    {
        printf("Entre com os valores para serem colocados em ordem:\n");
        for(i=1;i<=12;++i)
        {
            scanf("%d", &a[i]);
        }
        for(i=1;i<=11;++i)
            for(j=i+1; j<=12;++j)
            {
                if(a[i] < a[j])
                {
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
            }
                printf("Os valores em ordem sao:\n");
                for(i=1;i<=12;++i)
                {
                 printf("%d,", a[i]);
                }
            
        }
        getch ();
        return 0;
    
}
            
        
