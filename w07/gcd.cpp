#include<stdio.h>

int gcd(int a, int b)

{

    int i,answers;

    while(i<=a)

    {

        for(i=1;i<=a;i++)

        {

            if(a%i==0 && b%i==0)

                answers=i;

        }

    }

    return answers;

}

int rgcd(int a, int b)

{

    if(a==0)

        return b;

    else

        return rgcd(b%a,a);

}

int main()

{

    int a=48,b=126;

    printf("rgcd(%d,%d)=%d\n",a,b,rgcd(a,b));

    printf("gcd(%d,%d)=%d\n",a,b,gcd(a,b));

    a=48,b=128;

    printf("rgcd(%d,%d)=%d\n",a,b,rgcd(a,b));

    printf("gcd(%d,%d)=%d\n",a,b,gcd(a,b));

    a=48,b=144;

    printf("rgcd(%d,%d)=%d\n",a,b,rgcd(a,b));

    printf("gcd(%d,%d)=%d\n",a,b,gcd(a,b));

    a=48,b=48;

    printf("rgcd(%d,%d)=%d\n",a,b,rgcd(a,b));

    printf("gcd(%d,%d)=%d\n",a,b,gcd(a,b));

    return 0;

}
