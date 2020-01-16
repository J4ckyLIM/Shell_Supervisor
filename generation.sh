#!/bin/bash

vraiUser="limjacky"
user=$USER
# Checking if the user is the owner , if No , the process stops
if [ $user = $vraiUser ]
then
    ./genExec $1 | ./genSensorData 2> err.txt | stdbuf -oL cut -d ";" -f1,2,3,6  > log.txt 
else
    echo "Vous n'êtes pas le propriétaire du Mac, le processus s'arrête"
fi