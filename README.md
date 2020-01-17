# Shell_Supervisor

## Installation
```
git clone https://github.com/J4ckyLIM/Shell_Supervisor.git
```
## Use

Redirect to your folder containing the project

Compile all .c files

With this command: 
```
gcc <name of the file>.c -o <name of the Executable>
```

## Running the project

2 commands are available:

Params: 
* Milliseconds(int between 50-5000) 
* Directory name (string)
* File name (x2)(string)
* Maximum file size (Int)

example: 
```
bash supervisor.sh 1000 logFolder err.txt log.txt 200
```
```
bash supervisor.sh 
```
Or
```
./supervisor.sh
```
Don'f forget to enter params to run the project correctly

### Notes

The log files are created in a directory in your user's root 

