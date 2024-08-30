//TODO:make an function that revers the string


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Reverse the string using pointers or array
void RevString(char * Word){
int len = strlen(Word);
int locate = len -1;
char * temp = (char *)malloc((len +1)* sizeof(char));
int x = 0;
for(;x<len;x++){
    temp[x] = Word[locate];
    locate--; 
}
temp[x] = 0;
printf("%s \n" , temp) ;
free(temp);
}

//Reverse the string using Recursion 
void ReverseRecursion(char * string , int start , int end){
    if(start >= end){
        return ;
    }
    char temp = string[start];
    string[start] = string[end];
    string[end] = temp ; 
    ReverseRecursion(string , start +1 , end -1 );
}
 //best practice
int main(){
// char * Revstrign = RevString("Hi");
// char * string = "Hiiiiiiiiiii";
// RevString(string);
char amount[100] = "I am hussam i speak arabic only";
ReverseRecursion(amount , 0 , strlen(amount) - 1);
printf("%s  \n",amount);


//using build in function supported by some compilers like Turbo C
// printf("%s \n",strrev(amount));

return 0 ;
}