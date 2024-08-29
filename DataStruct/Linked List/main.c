#include <stdlib.h>
#include  <stdio.h>

struct node
{
    int value ;
    struct node* next;
};

typedef struct node node_t;
int main(int argc, char const *argv[])
{
    node_t node1 , node2 , node3 ;
    node1.value = 20 ;
    node1.next = &node2;
    printf("%d- ",node1.next);
    return 0;

}
