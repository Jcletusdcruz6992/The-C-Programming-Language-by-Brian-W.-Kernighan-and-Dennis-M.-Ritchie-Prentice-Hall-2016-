#include<stdio.h>


int main(){

float upper,lower,step;
upper=300;
lower=0;
step=20;

float far,cel;
far=lower;
while(far<=upper){

    cel=5.0*(far-32)/9.0;
    printf("Degree Far=%0.f ,Degree C=%0.2f \n",far,cel);
    far=far+step;

}
return 0;
}
