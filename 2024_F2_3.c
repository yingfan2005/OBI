#include<stdio.h>
#include<stdlib.h>
int main()
{
    int linha;
    int coluna;
    int mudanca;
    int i;
    scanf("%d",&linha);
    scanf("%d",&coluna);
    scanf("%d",&mudanca);
    getchar();
    int **matriz=NULL;
    matriz=(int **)calloc(linha,sizeof(int *));
    for(i=0;i<linha;i++)
    {
        matriz[i]=(int *)calloc(coluna,sizeof(int));
    }
    int j;
    int num=1;
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            matriz[i][j]=num;
            num++;
        }
    }
    char c;
    int fonte;
    int alvo;
    int tmp;
    for(i=0;i<mudanca;i++)
    {
        scanf("%c",&c);
        getchar();
        scanf("%d",&fonte);
        getchar();
        scanf("%d",&alvo);
        getchar();
        fonte-=1;
        alvo-=1;
        //printf("%c %d %d\n",c,fonte,alvo);
        if(c=='C')
        {
            for(j=0;j<linha;j++)
            {
                tmp=matriz[j][fonte];
                matriz[j][fonte]=matriz[j][alvo];
                matriz[j][alvo]=tmp;
            }
        }
        else if(c=='L')
        {
            for(j=0;j<coluna;j++)
            {
                tmp=matriz[fonte][j];
                matriz[fonte][j]=matriz[alvo][j];
                matriz[alvo][j]=tmp;
            }
        }
    }
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<linha;i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    matriz=NULL;
    return 0;
}
