#include<stdio.h>

int main(){
int c;
int nc;
while((c=getchar())!=EOF){
    if(c=='\n'){
        ++nc;
    }
}
printf("Line count is %d \n",nc);
return 0;
}
