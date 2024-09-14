#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *Author[3]= {"hussam","Ahmed", "Ali"};
    char **BestBook[2] ;
    char *Bestseller[1];
    BestBook[0] = &Author[1];
    printf("%p , %c,\n ",Author,(*(*(Author+1))));
    printf("%p , %c ,\n ",(Author+1),*(*(Author+1)+1));
    printf("%p , %s ,\n ",BestBook,*BestBook[0]);
    printf("%p , %s ,\n ",Author,*Author);
    return 0;
}