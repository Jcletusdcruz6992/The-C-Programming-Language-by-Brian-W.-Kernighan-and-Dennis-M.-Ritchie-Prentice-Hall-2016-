#include<stdio.h>
int doubling(int *ptr);

int main(){
int num=0;
printf("Enter a value \n");
scanf("%d",&num);
printf("Entered value is %d \n",num);
doubling(&num);
printf("After modification num=%d \n",num);

return 0;
}

int doubling(int *ptr){
(*ptr)*=2;
return *ptr;
}
