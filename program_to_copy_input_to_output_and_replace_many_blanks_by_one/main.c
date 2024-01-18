/*  Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. c program                                     */


#include<stdio.h>

int main(){
int c;
int last_blank_flag=0;
while((c=getchar())!=EOF){
    if(c==' '){
            if(!last_blank_flag){
             putchar(c);
             last_blank_flag=1;
            }

    }
    else{
        putchar(c);
    }
}
  return 0;
}



