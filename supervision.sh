#!bin/bash

# this script will handle generation.sh (start/stop)
# Get the size of the file to check if it is too big or not
errFileSize=bash du -h err.txt | cut -d 'K' -f1
#logFileSize=bash du -h log.txt | cut -d 'K' -f1
maxSize=2
echo $USER

# if [[ $errFileSize -eq 12 ]]
# then
    bash generation.sh $1
    # while [[ $errFileSize -lt $maxSize ]]
    # do
    #     #errFileSize=bash du -h err.txt | cut -d 'K' -f1
    #     echo "JDFHJDJGDHFJ"
    # done
# else
#     echo "La taille du fichier de log a atteint la limite maximal, le processus ne peut pas commencer"
# fi

