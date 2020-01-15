#include <stdio.h>
#include <unistd.h>

char c;
int main()
{
    printf("Welcome ! \n");

    while (read(0, &c, 1) == 1)
    {
        fflush(stdout);
        // Si il recoit "OK" on envoit un message
        if(c ==  'K'){
            printf("Everything is OK\n");
        }
        // Si on recoit "ERROR"
        else if(c == 'E'){
            printf("An error occured\n");
        }
        else{
            printf("Nothing happened");
        }
    }
    //printf(stdin, stdout,"\n");
}
