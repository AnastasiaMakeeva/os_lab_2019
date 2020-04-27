#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    //creating a child process
    pid_t child_pid;
    child_pid = fork();
    if (child_pid > 0) //it's a parent process
    {
        sleep(10); //pause for a 10 sek
    }
    else //it's a child process
    {
        exit(0);
    }
    return 0;
}