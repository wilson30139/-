#include<stdio.h>

#include<stdlib.h>

main(){

double kg,cm,BMI;

printf("請輸入公斤 公分:");

scanf("%lf %lf",&kg,&cm);

while(kg>=0 && cm>=0){

BMI=kg/((cm/100)*(cm/100));

if(BMI<18.5){

printf("體重過輕。\n");

}else if(BMI>=18.5 && BMI<24){

printf("正常範圍。\n");

}else if(BMI>=24 && BMI<27){

printf("過重。\n");

}else if(BMI>=27 && BMI<30){

printf("輕度肥胖。\n");

}else if(BMI>=30 && BMI<35){

printf("中度肥胖。\n");

}else if(BMI>=35){

printf("重度肥胖。\n");

}

printf("請輸入公斤 公分:");

scanf("%lf %lf",&kg,&cm);

}

return 0;

} 
