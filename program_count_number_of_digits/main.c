/*C program to count number of white spaces, non-white spaces ,number of digits */
#include<stdio.h>

int main(){
int i,c,no_white,no_other;
int digits[10];
i=no_white=no_other=0;
for(int j=0;j<10;j++){
    digits[i]=0;
}

while((c=getchar())!=EOF){
    if(c>='0'  && c<='9'  ){
        ++digits['0'-c];
    }
    else if(c==' ' || c=='\t' || c=='\n'){
        ++no_white;
    }
    else{
           ++no_other;
    }
}
for(int j=0;j<=9;j++){
    printf("digits[j]=%d \n",digits[j]);
}
printf("Number of white spaces=%d , No of non-white spaces=%d \n",no_white,no_other);
return 0;
}
