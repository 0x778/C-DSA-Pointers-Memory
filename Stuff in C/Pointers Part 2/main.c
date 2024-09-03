#include <stdlib.h>
#include <stdio.h>
#define Null ((void *)0)

int * x ;
int counter(){
    static int count ;
    count++;
    return count;
}


int main(){
    printf("%i\n" , counter());
    printf("%i\n" , counter());
    printf("%i\n" , counter());
    printf("%i\n" , counter());
   
   
   
  
    static int *m ;
    //two dimensaion array
    char * names[] = {"Hussam" , "Ahmed" , "Massan"};
    printf("%c \n" , *(*(names)+3));
    printf("%c\n", names[0][0]);

    //We need to avoid using pointers without uninitilization or using Null 
    int num ;
    int * numP = &num;
    printf("%p\n" , numP);
    //void pointer can point to any type of data pointers int * . char * , float *
    void* pnump = numP;
    numP = (int *)pnump;
    printf("%p", numP);  
    return 0;
}