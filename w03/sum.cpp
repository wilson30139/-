#include<stdio.h>

#include<stdlib.h>

main(){

int n1,n2;

printf("Enter n1 n2:");

scanf("%d %d",&n1,&n2);

while(n1>=0||n2>=0){

int sum=0;

for(int i=n1; i<=n2 ;i++ ){

sum+=i;

}

printf("sum(%d,%d)=%d\n",n1,n2,sum);

printf("Enter n1 n2:");

scanf("%d %d",&n1,&n2);

}

return 0;

}
