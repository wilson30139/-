#include<stdio.h>

int isleap(int year)

{

    if((year%4==0)&&!(year%100==0)||(year%400==0))

        return 1;

    else

        return 0;

}

int timeconvert(int hh, int mm, int ss)

{

    return hh*3600+mm*60+ss;

}

int main()

{

    while(1)

    {

        int choice;

        int year;

        int hh,mm,ss;

        int seconds;

        printf("Main Menu\n");

        printf("1.leap\n");

        printf("2.timeconvert\n");

        printf("3.exit\n");

        printf("=>");

        scanf("%d",&choice);

        if(choice==3)

            break;

        switch(choice)

        {

        case 1:

            printf("Enter year:");

            scanf("%d",&year);

            if(isleap(year))

                printf("Year %d is a leap year.\n",year);

            else

                printf("Year %d is not a leap year.\n",year);

        break;

        case 2:

            printf("Enter hh:mm:ss:");

            scanf("%02d:%02d:%02d",&hh,&mm,&ss);

            seconds=timeconvert(hh,mm,ss);

            printf("%02d:%02d:%02d=%d seconds\n",hh,mm,ss,seconds);

        break;

        }

    }

    return 0;

}
