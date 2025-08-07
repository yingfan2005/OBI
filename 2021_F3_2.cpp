#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **teclado=NULL;
    teclado=(int **)calloc(10,sizeof(int *));
    int i;
    for(i=0;i<10;i++)
    {
        teclado[i]=(int *)calloc(4,sizeof(int));
    }
    for(i=0;i<4;i++)
    {
        teclado[0][i]=0;
    }
    for(i=0;i<4;i++)
    {
        teclado[1][i]=0;
    }
    teclado[2][0]='a';
    teclado[2][1]='b';
    teclado[2][2]='c';
    teclado[2][3]=0;

    teclado[3][0]='d';
    teclado[3][1]='e';
    teclado[3][2]='f';
    teclado[3][3]=0;

    teclado[4][0]='g';
    teclado[4][1]='h';
    teclado[4][2]='i';
    teclado[4][3]=0;

    teclado[5][0]='j';
    teclado[5][1]='k';
    teclado[5][2]='l';
    teclado[5][3]=0;

    teclado[6][0]='m';
    teclado[6][1]='n';
    teclado[6][2]='o';
    teclado[6][3]=0;

    teclado[7][0]='p';
    teclado[7][1]='q';
    teclado[7][2]='r';
    teclado[7][3]='s';

    teclado[8][0]='t';
    teclado[8][1]='u';
    teclado[8][2]='v';
    teclado[8][3]=0;

    teclado[9][0]='w';
    teclado[9][1]='x';
    teclado[9][2]='y';
    teclado[9][3]='z';
    
    string numeros;
    int n;
    string s;
    cin>>numeros;
    int q_num=numeros.size();
    int q_s;
    cin>>n;
    int count=0;
    int flag=0;
    int res;
    int r=0;
    for(i=0;i<n;i++)
    {
        cin>>s;
        q_s=s.size();
        r=0;
        if(q_num==q_s)
        {
            for(int j=0;j<q_s;j++)
            {
                flag=0;
                for(int x=0;x<10;x++)
                {
                    for(int y=0;y<4;y++)
                    {
                        if((char)teclado[x][y]==s[j])
                        {
        
                            //cout<<teclado[x][y]<<"\n";
                            //cout<<s[j]<<"\n";
                            flag=1;
                            res=x;
                            //cout<<x<<"\n";
                            if(res==numeros[j]-'0')
                            {
                                r++;
                            }
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        break;
                    }
                }
            }
        }
        if(r==q_num)
        {
            count++;
        }

    }
    cout<<count<<"\n";
    for(i=0;i<10;i++)
    {
        free(teclado[i]);
    }
    free(teclado);
    teclado=NULL;
    return 0;
}
