#include<stdio.h>
#define Max 50
void draw(int m[][Max], int N)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("%3d ",m[i][j]);
        }
        printf("\n");
    }
}
void magic(int m[][Max], int N)
{
    int col,row;
    col=N-1;
    row=N/2;
    m[col][row]=1;
    for(int i=2; i<=N*N; i++)
    {
        if(i%5==1)
        {
            col=(col-1)%5;
            m[col][row]=i;
        }
        else
        {
            col=(col+1)%5;
            row=(row+1)%5;
            m[col][row]=i;
        }
    }
    draw(m,N);
}
void knight(int m[][Max], int N)
{
    int col,row;
    col=N-1;
    row=N/2;
    m[col][row]=1;
    for(int i=2;i<=N*N;i++)
    {
        if(i%5==1)
        {
            col=(col-1)%5;
            m[col][row]=i;
        }
        else
        {
            col=(col+5-2)%5;
            row=(row+1)%5;
            m[col][row]=i;
        }
    }
    draw(m,N);
}
int main()
{
    int m[Max][Max]= {0};
    int N=5;
    printf("Diagonal Move\n");
    magic(m,N);
    printf("\n");
    printf("Knight Move\n");
    knight(m,N);
    return 0;
}

