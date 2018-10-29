#include<stdio.h>

#include<stdlib.h>

main()

{

int seconds,hh,mm,ss;

printf("Enter seconds:");

scanf("%d",&seconds);

while(seconds>=0){

hh= seconds/3600;

    mm= seconds%3600/60;

    ss= seconds%60;

    printf("%d seconds= %02d:%02d:%02d\n",seconds,hh,mm,ss);

    printf("Enter seconds:");

    scanf("%d",&seconds);

}

return 0;

}
