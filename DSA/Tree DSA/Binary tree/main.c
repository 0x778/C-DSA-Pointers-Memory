#include <stdlib.h>
#include <stdio.h>

typedef struct node node;

struct node
{
  int data;
 node * left;
 node * right;
};

node * InitNewNode(int value){
    node * new = malloc(sizeof(node));
    new -> data = value;
    new -> left = NULL;
    new -> right = NULL;
    return new;
}

void DeleNode(node **del){

*del = NULL;
}

void PrintTree(node * root){ 
    if(root == NULL ){
        printf("*************EMPTY ROOT***********\n");
        return ;
    }
    printf("*************************************\n");
    printf("The value of the node is : %i \n" , root->data);
    printf("right \n");
    PrintTree(root->right);
    printf("Left \n");
    PrintTree(root->left);
    printf("Done \n");
    printf("**********************************\n");
}

int main (){

    /* Bad Way To init node
     node  * root = InitNewNode(10);
     root ->left = InitNewNode(100);
     root ->right = InitNewNode(200);
     root -> left -> left = InitNewNode(399);
    // Dele(&(root->left));
    free(root);
    */

   //Best Practice
   node * root , *n1 , *n2 , *n3 ;
   root = InitNewNode(10);
   n1 = InitNewNode(100);
   n2 = InitNewNode(1000);
   n3 = InitNewNode(700);
   root -> left = n1;
   root -> right = n2;
   n1 -> right = n3;
PrintTree(root);
// free(root,n1,n2,n3);
    return 0;
}
