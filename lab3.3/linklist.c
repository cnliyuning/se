 /*
  *  Revision log:
  *
  *  Created by liyuning, 2018/10/11
  *
  */

#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"
#include <string.h>

tDataNode* FindCmd(tDataNode *head, char * cmd)
{
    if(head == NULL || cmd == NULL)
    {
        return NULL;
    }
    tDataNode *p = head;
    while(p != NULL)
    {
        if(!strcmp(p->cmd, cmd))
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int ShowAllCmd(tDataNode * head)
{
    printf("Menu List:\n");
    tDataNode *p = head;
    while(p != NULL)
    {
        printf("%s - %s\n", p->cmd, p->desc);
        p = p->next;
    }
    return 0;
}


