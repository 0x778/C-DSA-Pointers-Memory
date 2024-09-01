#include <stdlib.h>
#include <stdio.h>
//lib for create files
#include <unistd.h>
#include <fcntl.h>


//function to copy from file to anthore using fopen()
void CopyFilesOpenf(char * from , char * to){
FILE *reads  = fopen(from,"r");
    FILE *writes = fopen(to,"w");

    if(reads == NULL || writes == NULL){
        perror("Error file doesn't located !");
        return ;
    }

    char r ;
    while((r = fgetc(reads)) != EOF){
        if(r == 'h'|| r == 'H'){
            r = 'M';
        }
         fputc(r,writes);

    }
    fclose(reads);
    fclose(writes);
}

//function to copy from file to anthore using open() using System Call 
void CopyFilesUsingOpen(char * from , char * to){
int DataFrom = open(from,O_RDWR);
int DataTo = open(to, O_RDWR| O_CREAT);
if (DataFrom < 0 || DataTo < 0 )
{
 perror("Error");
 return ;
}
char copy;
int Data ;
while (Data = read(DataFrom,&copy,sizeof(copy)))
{
    if(copy == 'H' || copy == 'h'){
        copy = 'Z';
    }
    printf("%c", copy);
    write(DataTo,&copy,sizeof(copy));
}

}





int main(int argc, char const *argv[])
{

    CopyFilesUsingOpen("HParagraph.txt", "Mparagraph.txt");
    return 0;
}
