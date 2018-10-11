#include "io.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    if(argc < 2)
    {
        fprintf(stderr,"usage : %s\n",argv[0]);
        exit(1);
    }
    int fd_in = open(argv[1],O_RDONLY);
    if(fd_in < 0)
    {
        fprintf(stderr,"open file 1 error: %s\n",strerror(errno));
        exit(1);
    }else
    {
        printf("open file1 : %d\n",fd_in);

    }
    copy(fd_in,STDOUT_FILENO);
    close(fd_in);
    return 0;
}
