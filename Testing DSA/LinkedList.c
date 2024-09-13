#include <stdlib.h>
#include <stdio.h>


//Initialzation
struct LinkedList
{
    int Value ;
   struct LinkedList  * Pointer ;
}LinkedList;
typedef struct LinkedList Link;

Link *initnewState(int value){
    Link *result= malloc(sizeof(Link));
    result->Value = value;
    result->Pointer = NULL;
    // name[6] = ;
    return result;
}


//LinkList Print
void PrintList(Link * head){
    Link * temp = head;
    while (temp != NULL)
    {
        printf("This is the value %i \n" , temp->Value);
        printf("this is the next address %p \n", temp->Pointer);
        printf("--------------------- \n");
        temp = temp->Pointer;
        /* code */

    }
    
}

//insert to the head

Link * insert_to_head(Link * Head , Link * node){
    node->Pointer = Head;
    return node;
}

int main(int argc, char const *argv[])
{
    Link * Head = NULL, * temp = NULL, *End = NULL;
    for (int i = 0; i < 25; i++)
    {
        temp = initnewState(i);
        Head = insert_to_head(Head,temp);
        /* code */
    }
   PrintList(Head);
    // printf(" %i %p %p %p %p" , p1.Value , p1.Pointer , Head , &p1 , &p2);
    return 0;
}
 