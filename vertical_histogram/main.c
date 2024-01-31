#include<stdio.h>
#define IN 1
#define OUT 0
#define MAX_WORD_LENGTH 30
#define HISTOGRAM_HEIGHT 15
int main(){
int c,state,word_length,max_word_count;
int word_freq[MAX_WORD_LENGTH+1]={0};
word_length=0;
max_word_count=0;

state=OUT;
while((c=getchar())!=EOF){
    if(c==' ' || c=='\n' || c=='\t'){
    if(state==IN){
        if(word_length<MAX_WORD_LENGTH){
            word_freq[word_length]++;
        }
        if(word_freq[word_length]>max_word_count){
            max_word_count=word_freq[word_length];
        }
        word_length=0;
    }
state=OUT;
    }
    else{
        state=IN;
        word_length++;
    }
}
int scale=(max_word_count>HISTOGRAM_HEIGHT)?(max_word_count/HISTOGRAM_HEIGHT)+1:1;

for(int j=HISTOGRAM_HEIGHT;j>=1;j--){
        for(int i=1;i<MAX_WORD_LENGTH;i++){
            if(word_freq[i]/scale>=j){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
putchar('\n');
}
putchar('\n');
for(int j=1;j<=MAX_WORD_LENGTH;j++){
    printf("%2d ",j);
}
putchar('\n');

for(int i=0;i<=MAX_WORD_LENGTH;i++){
   printf("---");
}
putchar('\n');

return 0;
}
