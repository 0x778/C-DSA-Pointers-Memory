#include <stdlib.h>
#include <stdio.h>


void main(){
int arry[100];
arry[0] = 10;
//init the pointer
int *p;
//init the address of the arry to pointer
//it doesn't need the & assign cause the arry is a pointer
p = arry;
printf("%i", *p);
int minus = 50;
//this assign the address of minus to the pointer
p = &minus;
//print the value of the pointer
printf("%i",*p);
//it also can access to any address in the memory
p[6] = 1000;
p[1000] = 1000;
}