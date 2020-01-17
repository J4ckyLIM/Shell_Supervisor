#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h> 

// this variable stores each byte received from reading
char c;

// Stores the error messages/ log messages to send
char buffer[120];

// Array of sensor names
char* sensorName[]= {
    "Détecteur de fumé",
    "Capteur d'humidité",
    "Capteur de mouvement",
    "Détecteur d'ouverture de porte"
};

// Array of error messages
char* errMsg[] = {
    "Capteur non fonctionnel",
    "Batterie vide",
    "Erreur système",
    "Branchement raté",
    "Erreur paramétrage"
};

int main()
{
    printf("Welcome ! \n");

    // Starts reading from the canal 0
    while (read(0, &c, 1) == 1)
    {
        fflush(stdout);
        // Si il recoit "OK" on envoit un message
        if(c ==  'K'){
            sprintf(buffer, "SensorID: %d; SensorName: %s; Value: %d; MinValue: %d; MeanValue: %d; MaxValue: %d\n", rand() % 10000, sensorName[rand() % 4], rand() % 100, rand() % 10, rand() % 50, rand() % 100);
            write(1,buffer,strlen(buffer));
        }
        // Si on recoit "ERROR"
        else if(c == 'E'){
            sprintf(buffer, "SensorID: %d; errorCode: %d; errorDetails: %s\n", rand() % 10000, rand() %100, errMsg[rand() % 5]);
            write(2,buffer,strlen(buffer));
        }
    }
    //printf(stdin, stdout,"\n");
}
 
