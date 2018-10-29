#include<stdio.h>

#include<ctype.h>

int main()

{

    int year,month,day;

    int months[12]= {31,28,31,30,31,30,31,31,30,31,30,31};

    int days;

    char fi='Y';

    while(fi== 'Y')

    {

        printf("Enter year:");

        scanf("%d",&year);

        printf("Enter month and day:");

        scanf("%d %d",&month,&day);

        days=0;

        for(int i=0; i<=month-2; i++)

            days+=months[i];

        days+=day;

        if(year%400==0 || (year%4==0 && year%100!=0))

            days+=1;

        printf("%d days passed since 1/1/%d\n",days,year);

        printf("Continue (Y/N)?");

        getchar();

        fi = toupper(getchar());

        printf("\n");

    }

    return 0;

}
