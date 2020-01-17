#!/bin/bash

vraiUser="limjacky"
# Checking if the user is the owner , if No , the process stops

if [ $USER = $vraiUser ];
then
    # Check if the directory already exists in the user's root path
    if [ ! -d "$HOME/$2" ];
    then
        # creates a directory in the user's root path if it doesn't exist
        mkdir -p $HOME/$2
    else
        # generation.sh gets back the data from stdout then write in the log files 
        #./genExec $1 | ./genSensorData 2>> $HOME/$2/$3 | stdbuf -oL cut -d ";" -f1,2,3,6  > $HOME/$2/$4
        ./genExec $1 | ./genSensorData 2>> $HOME/$2/$3  > $HOME/$2/$4
    fi
    #./genExec $1 | ./genSensorData 2>> $HOME/$2/$3 | stdbuf -oL cut -d ";" -f1,2,3,6  > $HOME/$2/$4
    ./genExec $1 | ./genSensorData 2>> $HOME/$2/$3 > $HOME/$2/$4
else
    echo "Vous n'êtes pas le propriétaire du Mac, le processus s'arrête"
fi