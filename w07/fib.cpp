#include<stdio.h>

long fib(int n)

{

    if(n==0 || n==1)

        return n;

    else

        return fib(n-1)+fib(n-2);

}

int main()

{

    int n=3;

    printf("fib(%d)=%d\n",n,fib(n));

    n=10;

    printf("fib(%d)=%d\n",n,fib(n));

    n=30;

    printf("fib(%d)=%d\n",n,fib(n));

    return 0;

}
