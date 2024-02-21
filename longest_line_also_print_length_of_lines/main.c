/*
Revise the main routine of the longest-line program so it will correctly print
the length of arbitrary long input lines, and as much as possible of the text.
*/

#include<stdio.h>
#define MAXLENGTH 1000
int getLine(char line[],int maxlength);
void copy(char to[], char from[]);


int main(){
int len; // length of current line;
int max;  // max length observed so far
char line[MAXLENGTH];
char longest[MAXLENGTH];
while((len=getLine(line,MAXLENGTH))>0){
    printf("len=%d \n",len);
    if(len>max){
        max=len;
        copy(longest,line);
    }
}
if(max>0){
    printf("longest line : %s \n",longest);
}
}

int getLine(char s[], int lim){
int i,c;
for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n' ;i++){
    s[i]=c;
}
if(c=='\n'){
    s[i]='\n';
    ++i;
}
s[i]='\0';

return i;
}


void copy(char to[], char from[]){
    int i=0;
while((to[i]=from[i])!='\0'){
    ++i;
}

}
