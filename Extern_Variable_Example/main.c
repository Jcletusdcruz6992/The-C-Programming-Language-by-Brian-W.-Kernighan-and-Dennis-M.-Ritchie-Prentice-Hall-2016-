#include<stdio.h>
//Extern variables
int count;
char message[]="Hello World";

void printMessage(void);
void incrementCount(void);

int main(){
count=0;
printMessage();
incrementCount();
printMessage();


return 0;
}


void printMessage(void){
printf("message= %s ,Count=%d \n",message,count);
}

void incrementCount(void){
count++;
}
