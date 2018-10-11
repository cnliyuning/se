/*
 *  Revision log
 *
 *  Created by liyuning, 2018/10/11
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linklist.h"

int Help();
int Quit();

#define CMD_MAX_LEN 128
#define DESC_LEN    1024
#define CMD_NUM     10


/*  menu program  */
static tDataNode head[] =
{
    {"help", "this is help cmd!", Help, &head[1]},
    {"version", "menu program v1.0", NULL, &head[2]},
    {"quit", "Quit from menu", Quit, NULL}
};

int main()
{
    /*  cmd line begins  */

	while(1)
	{
    	char cmd[CMD_MAX_LEN];
        printf("Input a cmd number > ");
		scanf("%s", cmd);
        tDataNode *p = FindCmd(head, cmd);
        if( p == NULL)
        {
            printf("This is a wrong cmd!\n");
            continue;
        }
        printf("%s - %s\n", p->cmd, p->desc);
        if(p->handler != NULL)
        {
            p->handler();
        }


    }

}

int Help()
{
    ShowAllCmd(head);
    return 0;

}


int Quit()
{
    exit(0);
}
