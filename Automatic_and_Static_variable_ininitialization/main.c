#include<stdio.h>

void func(void){
static int count=0;
int local_count=0;
printf("count=%d and local count=%d \n",count,local_count);
count++;
local_count++;

}
int main(){
func();
func();
func();

return 0;
}
