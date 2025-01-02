#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

void capatilization(char *str , size_t indices[]){
 size_t max = sizeof(indices) / sizeof(indices[0]);
        int c = 0;
    while(strncmp(*str,"\0")){

        if(c == indices[c]){
            *str = toupper(*str);
        }
        printf("%c" , *str);
        c++;

    }
    // return str;
}


int main ()
{
    size_t x[2] = {0,2};
    capatilization("heee" , x);
}