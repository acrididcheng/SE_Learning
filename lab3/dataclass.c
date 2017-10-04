/**************************************************************************************************/
//    >File Name: dataclass.c
//    >Author: AcrididCheng
//   >Mail: chenghuaming@aliyun.com
/**************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include "dataclass.h"

tDataNode* findCmd(tDataNode* head, char* cmd)
{
    if (head == NULL || cmd == NULL)
    {
        return NULL;
    }
    tDataNode *p = head;
    while(p != NULL)
    {
        if( strcmp(p->cmd, cmd) == 0)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int showAllCmd(tDataNode* head)
{
    if( head == NULL )
    {
        printf("wrong usage of showAllCmd()\n");
        return -1;
    }
    printf("Menu List:\n");
    tDataNode* p = head;
    while( p != NULL )
    {
        printf("%s -- %s\n", p->cmd, p->desc);
        p = p -> next;
    }
    return 0;
}
