#include <stdlib.h>
#include <stdio.h>

struct DoubleLink
{
    int value;
    struct DoubleLink * Previous;
    struct DoubleLink * Next;
    /* data */
};
typedef struct DoubleLink Double;

void PrintList(Double * HEAD){
    int nodes = 1;
    while (HEAD != NULL)
    {
        printf("The Value of the node number %i is : %i \n",nodes , HEAD->value);
        printf("The address of of the node number %i is : %p \n",nodes , HEAD);
        printf("The Adress Next node of the node number %i is : %p \n",nodes , HEAD->Previous);
        printf("The address of the previous node number %i is : %p \n",nodes , HEAD->Next);
        printf("----------------------------------------------------------\n");
        /* code */
        nodes = nodes + 1;
        HEAD = HEAD->Next;
        /* code */
    }
    
}

Double * InitaNewState(Double * Head , int value , Double ** last){
    Double * NewNode = malloc(sizeof(Double));
    NewNode -> value = value ;
    NewNode -> Previous = Head;
    NewNode->Next = NULL;
*last = NewNode; 
    return NewNode; 
}

int main(int argc, char const *argv[])
{
    Double n1 , n2 , n3 ;
    Double * Head , * Last;
    Double * temp;
     temp = InitaNewState(Head , 20,&Last);
     Head = temp;
     temp = InitaNewState(Head , 30 , &Last);
     temp->Next = Head;
     Head = temp;
     temp = InitaNewState(Head , 40 , &Last);
     temp->Next = Head;
     Head = temp;
     temp = InitaNewState(Head , 50 , &Last);
     temp->Next = Head;
    Head = temp;
    // n1.value = 10;
    // n1.Previous = NULL;
    // n1.Next = &n2;
    // n2.value = 20;
    // n2.Previous = &n1;
    // n2.Next = &n3;
    // n3.value = 30;
    // n3.Previous = &n2;
    // n3.Next = NULL;
    // Head = &n1;
    // Last = &n3;
    PrintList(Last);
    return 0;
}
