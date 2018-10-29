#include<stdio.h>

int sum(int n)

{

    int i,total=0;

    for(i=1;i<=n;i++)

    {

        total+=i;

    }

    return total;

}

int rsum(int n)

{

    if(n==1)

    {

        printf("%d\n",n);

        return 1;

    }

    else

    {

        printf("%d\n",n);

        return rsum(n-1)+n;

    }

}

int main()

{

    int n;

    printf("Enter n:");

    scanf("%d",&n);

    printf("sum(%d)=%d\n",n,sum(n));

    printf("rsum(%d)=%d\n",n,rsum(n));

    return 0;

}
