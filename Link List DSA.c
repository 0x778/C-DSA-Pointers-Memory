#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int Value;
    struct Node * NextNode;
    /* data */
};
typedef struct Node Node ;

void printList(Node * Head){
        int nodes = 1;
    while (Head != NULL)
    {
        printf("The Value of the node number %i is : %i \n",nodes , Head->Value);
        printf("The address of of the node number %i is : %p \n",nodes , Head);
        printf("The Adress Next node of the node number %i is : %p \n",nodes , Head->NextNode);
        printf("----------------------------------------------------------\n");
        /* code */
        nodes = nodes + 1;
        Head = Head->NextNode;
    }
    
}

Node * InitNewNode(int value){
    Node * NEWNode = malloc(sizeof(Node)); 
    NEWNode->Value = value;
    NEWNode->NextNode = NULL;
    return NEWNode;
}

Node * InsertToHead(Node ** Head, Node * node, Node **THEEND){
    node->NextNode = *Head;
    *Head = node;
    if((*THEEND)->NextNode == NULL){
    *THEEND = node;
    printf("THE END of the list is in node %p \n with value: %i \n",*THEEND,(*THEEND)->Value);
    printf("**********************************************\n");
    }
    return node;
}


Node * FindNode(Node * Head , int value){
Node * temp = Head ;
while (temp!= NULL)
{
    if (temp->Value == value)
    {
        return temp;
        /* code */
    }
temp = temp->NextNode;
    /* code */
}

    return NULL;
}


void insert_after_node(Node ** after , Node * NewNode){
    NewNode->NextNode = (*after)->NextNode;
    (*after)->NextNode = NewNode;
}

int main(int argc, char const *argv[])
{
    Node * Head =NULL, *last , *temp;
    for (size_t i = 0; i < 25; i++)
    {
        temp = InitNewNode(i);
        Head = InsertToHead(&Head,temp ,&last);  /* code */
    }
        

    temp = FindNode(Head,20);
    printf("found the node with the value :%i \n", temp->Value);

    insert_after_node(&temp, InitNewNode(900));
    // temp = InitNewNode(19);
    // Head = temp ;
    // 
    // temp = InitNewNode(60);
    // temp->NextNode = Head;
    // Head = temp;
    printList(Head);
    return 0;
}
