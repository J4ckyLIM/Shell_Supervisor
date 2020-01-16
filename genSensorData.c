#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h> 

char c;
char buffer[120];

int main()
{
    printf("Welcome ! \n");

    while (read(0, &c, 1) == 1)
    {
        fflush(stdout);
        // Si il recoit "OK" on envoit un message
        if(c ==  'K'){
            sprintf(buffer, "SensorID: %d; SensorName: %s; Value: %d; MinValue: %d; MeanValue: %d; MaxValue: %d\n", rand() % 10000, "Capteur", rand() % 100, rand() % 10, rand() % 50, rand() % 100);
            write(1,buffer,strlen(buffer));
        }
        // Si on recoit "ERROR"
        else if(c == 'E'){
            sprintf(buffer, "SensorID: %d; errorCode: %d; errorDetails: %s\n", rand() % 10000, rand() %100, "Le capteur n'est plus en marche");
            write(2,buffer,strlen(buffer));
        }
    }
    //printf(stdin, stdout,"\n");
}

 
