#include<stdio.h>
#define IN 1     //IN means inside a word
#define OUT 0    // OUT means outside a word
int main(){
//char input_string[100];
int nc,nw,state,nl;  //nc-number of characters , nw-number of words,state-either in or out , nl-number of lines
int c;


printf("Enter your input string \n");
//scanf("%100s",input_string);      scanf doesnt read spaces
//fgets(input_string,sizeof(input_string),stdin);     // reads a line with spaces
//printf("String you entered is %s \n",input_string);

nc=nw=nl=0;
state=OUT;
//for(int i=0;input_string[i]!='\0';++i){
while((c=getchar())!=EOF){
        ++nc;
    if(c=='\n' ){
        ++nl;
    }
    if(c=='\t' || c==' ' || c=='\n'){
        state=OUT;
    }
    else if(state==OUT){
            state=IN;
            ++nw;
    }
}
printf("Nc=%d ,nl=%d , nw=%d \n",nc,nl,nw);
return 0;
}
