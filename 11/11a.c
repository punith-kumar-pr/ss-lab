#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void charatatime (char *);

int main(){
    pid_t pid;
    pid = fork();

    if (pid < 0)
        printf("Fork error");
    
    else if (pid==0)
        printf("Output from child\n");
    
    else if (pid>0)
        printf("Out from parent\n");
    
    exit(0);
}

static void charatatime (char *str){
    char * ptr;
    int c;
    setbuf(stdout, NULL);
    for( ptr=str ; (c = *ptr++)!=0;)
        putc(c, stdout);
}