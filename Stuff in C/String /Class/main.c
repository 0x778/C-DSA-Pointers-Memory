#include <stdlib.h>
#include <stdio.h>

int string_length(char *word){
    int counter = 0 ;
    while (word[counter] != 0)
    {
        counter++;
        
    }
    
return counter;
}


//TODO:using *temp to access to the from characters
void Copy_string(char* from , char*to){
    char *temp;
    temp = from ;
    int counter = 0;
    while (temp[counter] != 0)
    {
     printf("%d \n",temp[counter])  ; 
     to[counter] = from[counter];
     counter++;  
    }
    to[counter]= 0 ;
}



int main(int argc, char const *argv[])
{
    char *wordusingpointer = "Hi iam using pointer";
    char wordusingarray[]="hi i am using array";
    char copy_word[30];
    // printf("%s","dasf");
    Copy_string(wordusingpointer,copy_word);
    printf("%d hi again \n",string_length(wordusingarray));
    printf("%s \n",copy_word);
    return 0;
}
