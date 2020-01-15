#include <stdio.h>
#include <string.h>
#include <unistd.h>

char c;
char buffer[50];

int main()
{
    printf("Welcome ! \n");

    while (read(0, &c, 1) == 1)
    {
        fflush(stdout);
        // Si il recoit "OK" on envoit un message
        if(c ==  'K'){
            sprintf(buffer, "Everything is OK\n");
            write(1,buffer,strlen(buffer));
        }
        // Si on recoit "ERROR"
        else if(c == 'E'){
            sprintf(buffer, "An error has occured\n");
            write(2,buffer,strlen(buffer));
        }
    }
    //printf(stdin, stdout,"\n");
}

 
