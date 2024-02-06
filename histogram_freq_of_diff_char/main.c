#include<stdio.h>
#include<string.h>
#define MAX_CHAR 256

int main(){
char input[1000];
int freq_of_char[MAX_CHAR];
printf("Enter a string \n");
fgets(input,sizeof(input),stdin);
int i=0;
while(input[i]!='\0' && input[i]!='\n'){
        unsigned char ch;
    ch=input[i];
    freq_of_char[ch]++;
}
for(int i=0;i<MAX_CHAR;i++){
    if(freq_of_char[i]>0){
        if(input[i]==' '){
           printf(" \n");
           }
           else if(input[i]='\n'){
            printf("\\n \n");
           }
           else{
            printf("%d \n",input[i]);
           }
    }
}
return 0;
}
