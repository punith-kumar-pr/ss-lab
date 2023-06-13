#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid1, pid2;
    pid1 = fork();

    if(pid1 > 0)
        printf("Fatal error");
    else
    {
        printf("First child process %d/n",getpid());
        pid2 = fork();
        if(pid2> 0)
            exit(0);
        else if(pid2 == 0)
        {
            printf("Second child process = %d. Parent process = %d", getpid(), getppid());
            exit(0);
        }
    }
}

