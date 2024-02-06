/* Write a program that prints its input one word per line. cprogram c program */

#include<stdio.h>
int main(){
char c;
char last_word='\0';
while((c=getchar())!=EOF){
    if(c==' ' || c=='\t' || c=='\n' ){
        if(last_word!='\0' || last_word!=' ' || last_word!='\n' || last_word!='\t'){
            putchar('\n');
        }
    }
    else{
        putchar(c);
    }
    last_word=c;    // setting current charcter to c

}

return 0;
}
