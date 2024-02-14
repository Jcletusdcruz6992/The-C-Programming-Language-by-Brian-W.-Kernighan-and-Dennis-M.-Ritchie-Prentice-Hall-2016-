#include<stdio.h>

//function prototype
int power(int base, int exponent);

//function main
int main(){
while(1){
    int bas=0;
    int exp=0;
    printf("Enter the base value \n");
    scanf("%d",&bas);
    printf("bas=%d \n",bas);
    printf("Enter the exp value \n ");
    scanf("%d",&exp);
    printf("exp=%d \n",exp);
    printf("%d^%d=%d \n",bas,exp,power(bas,exp));
}
return 0;
}

//function defnition
int power(int base, int exponent){
int result;
result=1;
for(int i=0; i<exponent;i++){
    result*=base;

}
 return result;
}
