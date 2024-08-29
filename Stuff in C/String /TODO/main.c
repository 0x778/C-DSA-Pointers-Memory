//TODO:make an function that revers the string


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Where is the Error
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

void main(){
// char * Revstrign = RevString("Hi");
char * string = "Hiiiiiiiiiii";
RevString(string);
}