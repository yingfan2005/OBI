#include<stdio.h>
#include<stdlib.h>

int main()
{
    int e,m,d;
    scanf("%d%d%d",&e,&m,&d);
    int i;

    int ** mesmo=NULL;
    mesmo=(int **)calloc(m+1,sizeof(int *));
    for(i=0;i<=m;i++)
    {
        mesmo[i]=(int *)calloc(2,sizeof(int));
    }
    mesmo[0][0]=0;
    mesmo[0][1]=0;
    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&mesmo[i][0],&mesmo[i][1]);
    }
    

    int ** distinto=NULL;
    distinto=(int **)calloc(d+1,sizeof(int *));
    for(i=0;i<=d;i++)
    {
        distinto[i]=(int *)calloc(2,sizeof(int));
    }
    distinto[0][0]=0;
    distinto[0][1]=0;
    
    for(i=1;i<=d;i++)
    {
        scanf("%d%d",&distinto[i][0],&distinto[i][1]);
    }
    

    int *grupo=NULL;
    grupo=(int *)calloc(e+1,sizeof(int));
    grupo[0]=0;
    int a,b,c;
    for(i=1;i<=e/3;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        grupo[a]=grupo[b]=grupo[c]=i;
    }

    int count=0;
    for(i=1;i<=m;i++)
    {
        if(grupo[mesmo[i][0]]!=grupo[mesmo[i][1]])
        {
            count++;
        }
    }
    for(i=1;i<=d;i++)
    {
        if(grupo[distinto[i][0]]==grupo[distinto[i][1]])
        {
            count++;
        }
    }
    printf("%d\n",count);

    for(i=0;i<=m;i++)
    {
        free(mesmo[i]);
    }
    free(mesmo);

    for(i=0;i<=d;i++)
    {
        free(distinto[i]);
    }
    free(distinto);
    free(grupo);
    return 0;
}


