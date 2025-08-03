#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d",&num);

    int **matriz=NULL;
    matriz=(int **)calloc(num,sizeof(int *));
    int i=0;
    for(i=0;i<num;i++)
    {
        matriz[i]=(int *)calloc(num,sizeof(int));
    }

    int inicio=0;
    int fim=num;
    int j;
    while(inicio<=fim)
    {
        for(i=inicio;i<fim;i++)
    {
        for(j=inicio;j<fim;j++)
        {
            matriz[i][j]+=1;
        }
    }
    inicio++;
    fim--;
    }

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<num;i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
