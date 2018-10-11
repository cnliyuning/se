#include "io.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    if(argc < 3)
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
    int fd_out = open(argv[2],O_WRONLY | O_CREAT | O_TRUNC,0644);
    if(fd_out < 0)
    {
        fprintf(stderr,"open file 2 error: %s\n",strerror(errno));
        exit(1);
    }else
    {
        printf("open file 2 : %d\n",fd_out);
    }
    copy(fd_in,fd_out);
    close(fd_in);
    close(fd_out);
    return 0;
}
