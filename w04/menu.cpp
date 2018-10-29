#include<stdio.h>

main()

{

    int choice;

    int height;

    int width;

    int i;

    int j;

    int type;

    while(1)

    {

        printf("Main Menu\n");

        printf("1.Rectangle\n");

        printf("2.Vertical Triangle\n");

        printf("3.Exit\n");

        printf("=> ");

        scanf("%d",&choice);

        if(choice==3)

            break;

        switch(choice)

        {

            case 1:

            printf("Enter height and width:");

            scanf("%d %d",&height,&width);

            for(i=1;i<=height;i++)

            {

                for(j=1;j<=width;j++)

                {

                    if(i==1 || j==1 || i==height || j==width)

                        printf("*");

                    else

                        printf(" ");

                }

                printf("\n");

            }

            break;

            case 2:

                printf("Enter height and type:");

                scanf("%d %d",&height,&type);

                width=height;

                switch(type)

                {

                    case 1:

                    for(i=1;i<=height;i++)

                    {

                        for(j=1;j<=width;j++)

                        {

                            if(i==j || i==height || j==1)

                                printf("*");

                            else

                                printf(" ");

                        }

                        printf("\n");

                    }

                    break;

                    case 2:

                    for(i=1;i<=height;i++)

                    {

                        for(j=1;j<=width;j++)

                        {

                            if(i+j==6 || i==height || j==width)

                                printf("*");

                            else

                                printf(" ");

                        }

                        printf("\n");

                    }

                    break;

                    case 3:

                    for(i=1;i<=height;i++)

                    {

                        for(j=1;j<=width;j++)

                        {

                            if(i+j==6 || j==1 || i==1)

                                printf("*");

                            else

                                printf(" ");

                        }

                        printf("\n");

                    }

                    break;

                    case 4:

                    for(i=1;i<=height;i++)

                    {

                        for(j=1;j<=width;j++)

                        {

                            if(i==j || i==1 || j==width)

                                printf("*");

                            else

                                printf(" ");

                        }

                        printf("\n");

                    }

                    break;

                }

        }

    }

    return 0;

}
