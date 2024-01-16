#include<stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 10

int main(){
    int fahr;
    for(fahr>LOWER;fahr<=UPPER;fahr=fahr+STEP){
        printf("Degree Fareheit =%6d and Degree celsious =%6.2f \n",fahr,(5.0/9.0)*(fahr-32));
    }
return 0;
}
