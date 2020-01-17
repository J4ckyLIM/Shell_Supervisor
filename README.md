# Shell_Supervisor

## Installation
```
git clone https://github.com/J4ckyLIM/Shell_Supervisor.git
```
## Use

redirect to your folder containing the project

compile all .c files

with this command: 
```
gcc <name of the file>.c -o <name of the Executable>
```

## Running the project

2 commands are available:
```
params: 
_milliseconds(int between 50-5000) 
_directory name (string)
_file name (x2)(string)
_maximum file size (Int)

example: bash supervisor.sh 1000 logFolder err.txt log.txt 200

bash supervisor.sh or

./supervisor.sh
```


Don'f forget to enter params to run the project correctly
