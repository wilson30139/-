#include<stdio.h>

#include<stdlib.h>

main(){

double kg,cm,BMI;

printf("�п�J���� ����:");

scanf("%lf %lf",&kg,&cm);

while(kg>=0 && cm>=0){

BMI=kg/((cm/100)*(cm/100));

if(BMI<18.5){

printf("�魫�L���C\n");

}else if(BMI>=18.5 && BMI<24){

printf("���`�d��C\n");

}else if(BMI>=24 && BMI<27){

printf("�L���C\n");

}else if(BMI>=27 && BMI<30){

printf("���תέD�C\n");

}else if(BMI>=30 && BMI<35){

printf("���תέD�C\n");

}else if(BMI>=35){

printf("���תέD�C\n");

}

printf("�п�J���� ����:");

scanf("%lf %lf",&kg,&cm);

}

return 0;

} 
