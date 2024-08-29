#include <stdlib.h>
#include <stdio.h>
#include <time.h>




void main(){
srand(time(0));

int guessnumber , playernumber , max , min;
max = 10;
min = 0;
guessnumber= rand() % (max - min + 1) + min;
printf("%s","Enter Number from 0 - 10 :");
scanf("%i",&playernumber);
if(playernumber == guessnumber){
    printf("%s","great guess u win!!!");
}
else{
printf("%s , %i , %s","sorry lucky anthor time the number was :" ,guessnumber ,"\n");
}
}