#include<stdio.h>
void modify_array(int arr[], int size);

int main(){
int numbers[]={1,2,3,4,5};
printf("Array before modification \n");
int size_array=sizeof(numbers)/sizeof(int);
for(int i=0;i<size_array;i++){
    printf("numbers[%d]=%d \n",i,numbers[i]);
}
modify_array(numbers,size_array);

printf("Array after modification \n");
for(int i=0;i<size_array;i++){
    printf("numbers[%d]=%d \n",i,numbers[i]);
}
}

void modify_array(int arr[],int size){
for(int i=0;i<size;i++){
    arr[i]*=2;
}

}
