/* Exercise 1-8. Write a program to count blanks, tabs, and newlines.   */

#include<stdio.h>

int main(){
int blank_counter,tab_counter,newlines_counter;
int c=0;
blank_counter=0;
tab_counter=0;
newlines_counter=0;

while((c=getchar())!=EOF){
   if(getchar()==' '){
    ++blank_counter;
   }
   if(getchar()=='\t'){
    ++tab_counter;
   }
   if(getchar()=='\n'){
    ++newlines_counter;
   }

}

printf("Blank_counter=%d ,Tab_counter=%d,newlines_counter=%d \n",blank_counter,tab_counter,newlines_counter);
return 0;
}
