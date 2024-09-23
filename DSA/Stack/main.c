#include <stdlib.h>
#include <stdio.h>

#define HIGHLENGTH 20
#define EMPTY 0
int stacklist[HIGHLENGTH];
int * last = stacklist;
int counter = EMPTY ;

void Push(int x){
    if (counter < HIGHLENGTH)
    {
    *last = x ;
    last += 1 ;
     counter++;   
    }
    
}

void POP (){
    if (counter != 0)
    {
    last -= 1;
     counter--;
    }
    
}

int main()
{
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(5);
    Push(7);
    Push(7);
    Push(7);
    Push(7);
    POP();
    Push(10);
    return 0;
}
