/* Write a program detab that replaces tabs in the input with the proper number
   of blanks to space to the next tab stop. Assume a fixed set of tab stops, say
   every n columns. */


#include<stdio.h>
#define TABLEN 5
#define MAXLINE 1000

int get_line(char st[] , int maxline);
void print_detab(char lin[]);


int main(){
int len=0;
char line[MAXLINE];
while((len=get_line(line,MAXLINE))>0){
    print_detab(line);
}

return 0;
}


int get_line(char st[] , int maxline){
int i=0;
int c;
for(i=0;i<maxline-1 && (c=getchar())!=EOF && c!='\n' ;i++){
 st[i]=c;
}
if(c=='\n'){
st[i]='\n';
i++;

}

st[i]='\0';

return i;
}



void print_detab(char lin[]){
int i=0;
int n;
for(i=0;lin[i]!='\0';i++){
    if(lin[i]!='\t'){
        putchar(lin[i]);
    }
    else{
       n=TABLEN-(i%TABLEN);
       for(int j=0;j<n;j++){

        putchar(' ');
       }
    }
}

}

