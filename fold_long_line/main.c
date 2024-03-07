/* Write a program to "fold" long input lines into two or more shorter lines
   after the last non-blank character that occurs before the n-th column of input.
   Make sure your program does somthing intelligent with very long lines, and
   if there are no banks or tabs before the specified column. */

#include<stdio.h>
#define COLUMN 5

int main(){
int i,c;
char line[COLUMN +1];
while((c=getchar())!=EOF){
  if(c=='\n'){
        line[i]=c;
        line[i+1]='\0';

        printf("%s\n",line);
         i=0;
      }
else if(i<COLUMN){
    line[i]=c;
    ++i;
    line[i]='\0';
    printf("%s\n",line);
}

else{
    int k=0,j;
    for(j=i-1;line[j]==' ' && j>=0 ;j--){
        ++k;
    }
    line[j+1]='\0';
printf("%s\n",line);

for(i=0;i<k;i++){
    line[i]=' ';
}
   line[k]=c;
   i=k+1;
}

}

line[i]='\0';
printf("%s\n",line);
return 0;


}
