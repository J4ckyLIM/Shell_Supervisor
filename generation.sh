#!/bin/bash

vraiUser="limjacky"
user=$USER
if [ $user = $vraiUser ]
then
    ./genExec $1 | ./genSensorData 2> err.txt > log.txt
else
    echo "Vous n'êtes pas le propriétaire du Mac, le processus s'arrête"
fi