/* Write a program entab that replaces strings of blanks by the minimum number of tabs
   and blanks to achieve the same spacing. Use the same tab stops as for detab. */

#include<stdio.h>
#define TABLEN 3
#define MAX_LENGTH 1000
void entab(char line[]);
int get_line(char line[], int length);
int tab_replace_len(char line[],int n);

int main(){
int len;
char line[MAX_LENGTH];
while((len=get_line(line,MAX_LENGTH))>0){
    entab(line);
}

return 0;

}

int get_line(char line[], int length){
int i=0;
int c;
for(i=0;i<length-1 && (c=getchar())!=EOF && c!='\n';i++ ){
    line[i]=c;
}
if(c=='\n'){
    line[i]=c;
    i++;
}
line[i]='\0';
return i;
}


void entab(char line[]){
int i=0;
int tabs,spaces;
for(i=0;line[i]!='\0';i++){

    if(line[i]==' '){
         tabs=tab_replace_len(line,i)/TABLEN;
    spaces=tab_replace_len(line,i)%TABLEN;
    for(int j=0;j<tabs;j++){
        putchar('\t');
    }
    for(int j=0;j<spaces;j++){
        putchar(' ');
    }
    i=i+tabs+spaces-1;
}
else{
putchar(line[i]);
}

}
}

int tab_replace_len(char line[],int n){
int count=0;
while(line[n]==' '){
    ++count;
++n;
}
return count;

}
