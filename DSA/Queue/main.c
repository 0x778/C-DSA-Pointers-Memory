#include <stdlib.h>
#include <stdio.h>

#define MAXLENGTH 5

int Queue[MAXLENGTH];
int *front = Queue;
int *rear = Queue;
int count = 0;

void ENQUEUE(int value){
    if(count < MAXLENGTH){
    *rear = value;
    rear += 1 ;
    count++;
    }else{
        rear = Queue;
        count = 0 ;
    }
}

void DEQUEUE(){
    if(count == 0 ){
        front = Queue;
        rear = Queue;
    }else{
        front += 1 ;
        printf("%i" , *front);
    }
}

int main(){
    ENQUEUE(1);
    ENQUEUE(2);
    ENQUEUE(3);
    ENQUEUE(4);
    ENQUEUE(5);
    DEQUEUE();
    DEQUEUE();
    DEQUEUE();
    DEQUEUE();
    DEQUEUE();


    return 0;
}