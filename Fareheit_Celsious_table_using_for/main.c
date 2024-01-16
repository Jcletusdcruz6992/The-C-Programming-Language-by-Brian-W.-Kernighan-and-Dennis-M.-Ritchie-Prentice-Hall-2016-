/*
Author:James Cletus Dcruz
Title:Program to convert farenheit to degree celsuis

*/


#include<stdio.h>

int main(){
for(int fahr=300;fahr>=0;fahr=fahr-20){

    printf("Fareheit=%d and Celsious=%6.2f \n",fahr,(5.0/9.0)*(fahr-32));
}

return 0;
}
