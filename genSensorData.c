#include <stdio.h>
#include <unistd.h>

char c; 
int main()
{
printf( "Welcome ! \n");

while (read(0,&c,1)==1){
    write(1,&c,1);
}
//printf(stdin, stdout,"\n");
}
