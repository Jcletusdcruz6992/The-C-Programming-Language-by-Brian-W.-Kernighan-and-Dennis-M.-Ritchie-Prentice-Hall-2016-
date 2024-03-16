/* Write a program to "fold" long input lines into two or more shorter lines
after the last non-blank character that occurs before the n-th column of input.
Make sure your program does somthing intelligent with very long lines, and
if there are no banks or tabs before the specified column. */

#include<stdio.h>
#define COLUMN 8

int main(){
int c,j,k;
int i=0;
char line[COLUMN+1];

while((c=getchar())!=EOF){
    if(c=='\n'){
        line[i]='\0';        // end the line , since c is a new line
        printf("%s\n",line); //print the current line to console
        i=0;                 //to reset the counter
    }
    else if(i<COLUMN){       // if i is less than the COLUMN length
    line[i]=c;               // line is assigned to the current input on console
    i++;                     // increment the counter
    }
    else{
       for(j=i-1;j>=0 &&(line[j]==' ' || line[j]=='\t');j--){                   // This will iterae to find the last non blank charcater of the previous ;ine
        ;
       }
       if(j<0){  // If no blank character is found
       line[i]='\0';
       printf("%s\n",line);  // end the line
       i=0;
       }
       else{                                             // if non-blank characters are found

        line[j+1]='\0';
        printf("%s\n",line);

                                                         // shift the remaining characters to the next line
        for(k=0;j+2+k<i;k++){
            line[k]=line[j+2+k];
        }
        i=k;    // assign back to i after shifting the remaining characters

       }
       line[i]=c;
        i++;


    }


}
 if(i>0) // if last line excists
    {
        line[i]='\0';
        printf("%s\n",line);
    }
return 0;

}
