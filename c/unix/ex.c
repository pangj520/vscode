#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    puts("begin");
    fflush(NULL);
    pid = fork();
    if (pid == 0){
        execl("/bin/date", "date", NULL);
        perror("/execl");
        exit(1);
    }
    wait(NULL);
    puts("end");
    exit(0);
}