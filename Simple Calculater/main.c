#include <stdlib.h>
#include <stdio.h>

int sum(int num1 , int num2){
return num1 + num2 ;
}

int minus(int num1 ,int num2){
    return num1 - num2 ;
}

int multi(int num1 , int num2){
    return num1 * num2 ;
}

int mod(int num1 , int num2){
    return num1 % num2;
}

int divide(int num1 , int num2){
    return num1 / num2 ;
}

void main(){
calculater();
}

void calculater(){
int num1 ; 
printf("%s","write your first number!");
scanf("%d",&num1);
char symbol ; 
printf("%s","write your operation !");
scanf(" %c",&symbol);
int num2 ;
printf("%s","write your second number! ");
scanf("%d",&num2);

if(symbol == '+')
    printf("%i",sum(num1,num2));
if (symbol == '-')
    printf("%i", minus(num1,num2));
if (symbol == '*')
   printf("%i",multi(num1,num2));
if (symbol == '/')
   printf("%i",div(num1,num2));
if (symbol == '%')
   printf("%i",mod(num1,num2));
}