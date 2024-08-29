#include <stdlib.h>
#include <stdio.h>




void main(){
int guessnumber , playernumber;

guessnumber= rand();
printf('%s',"Enter Number from 0 - 10 :");
scanf("%i",&playernumber);
if(playernumber == guessnumber){
    printf("%s","great guess u win!!!");
}
else{
printf("%s","sorry lucky anthor time");
}
}