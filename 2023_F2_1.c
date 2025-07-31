#include<stdio.h>
#include<stdlib.h>
int main()
{
    int tam1;
    scanf("%d",&tam1);
    char *str1=(char *)calloc(tam1,sizeof(char));
    scanf("%s",str1);
    int tam2;
    scanf("%d",&tam2);
    char *str2=(char *)calloc(tam2,sizeof(char));
    scanf("%s",str2);
    int i;
    int count=0;
    int tam;
    if(tam1>tam2)
    {
        tam=tam2;
    }
    else
    {
        tam=tam1;
    }
    char *p1=str1;
    char *p2=str2;
    for(i=0;i<tam;i++)
    {
        if(*p1==*p2)
        {
            count++;
        }
        p1++;
        p2++;
    }
    printf("%d\n",count);
    free(str1);
    str1=NULL;
    free(str2);
    str2=NULL;
    return 0;
}
