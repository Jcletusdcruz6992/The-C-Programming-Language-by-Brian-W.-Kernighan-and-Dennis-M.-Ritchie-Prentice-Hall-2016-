#include<stdio.h>

int main(){
float cel,far;
for(int i=0;i<=300;i+=20){
far=i;
cel=(5.0/9.0)*(far-32);
printf("Far=%0.2f , cel=%0.2f \n",far,cel);
}

return 0;
}
