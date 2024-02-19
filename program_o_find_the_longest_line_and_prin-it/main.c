#include<stdio.h>
#define MAXLENGTH 1000

int getLine(char line[], int maximumlength);
void copy(char to[],char from[]);

int main(){
int max=0;                        // max length of line
int len=0;                        // current length of the line
char line[MAXLENGTH];             // current line
char longest[MAXLENGTH];          // string that stores the longest line
while((len=getLine(line,MAXLENGTH))>0)
{
    if(len>max){
        max=len;
        copy(longest,line);
    }
}
if(max>0){
    printf("%s",longest);   //if max >0 means there excits a longest line
}

return 0;
}

int getLine(char st[],int lim){
int i, c;
for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++){
    st[i]=c;
}
if(c=='\n'){
    st[i]='\n';
    ++i;
}
st[i]='\0';
return i;
}
void copy(char to[],char from[]){
    int i=0;
while((to[i]=from[i])!='\0')
{
    ++i;
}
}
