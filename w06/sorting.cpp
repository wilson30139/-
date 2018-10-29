#include<stdio.h>

void one(int A[], int n)

{

    for(int i=0;i<=n;i++)

        printf("%3d",A[i]);

}

void three(int A[], int n)

{

    for(int i=0;i<=n;i++)

        printf("%3d",A[i]);

}

void two(int A[], int n)

{

    int temper;

    for(int i=0;i<n;i++)

    {

        for(int j=0;j<n;j++)

        {

            if(A[j]>A[j+1])

            {

                temper=A[j+1];

                A[j+1]=A[j];

                A[j]=temper;

            }

        }

    }

    three(A,n);

}

int main()

{

    int A[10]={34,78,12,9,87,66,88,99,56,11};

    int n=10-1;

    printf("original:");

    one(A,n);

    printf("\nsorting:");

    two(A,n);

    return 0;

}
