/* C program to count the occurence of all digits ands characters */
#include<stdio.h>

int main()
{
int digits_count[10];
for(int i=0;i<10;i++){
    digits_count[i]=0;
}
int no_white_spaces=0;
int no_others=0;
int c;
while((c=getchar())!=EOF){

    if(c>='0' && c<='9'){
       ++digits_count[c-'0'];
    }
    else if(c==' ' || c=='\n' || c=='\t'){
        ++no_white_spaces;
    }
    else{
        ++no_others;
    }
}

 for(int i=0;i<10;i++){
    printf("digits_count[%d]=%d \n",i,digits_count[i]);
 }
 printf("No of white spaces = %d \n",no_white_spaces);
 printf("No of other characters =%d \n",no_others);
 return 0;
}
