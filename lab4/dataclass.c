/**************************************************************************************************/
//    >File Name: dataclass.c
//    >Author: AcrididCheng
//   >Mail: chenghuaming@aliyun.com
/**************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dataclass.h"

tDataNode_real* findCmd(tLinkTable * linktable, char * cmd)
{
    if (linktable == NULL || cmd == NULL)
    {
        return NULL;
    }
    tLinkTableNode *CurrentLinkTableNode = GetLinkTableHead(linktable);
    tDataNode_real * p;

    p = (tDataNode_real *)CurrentLinkTableNode;

    while(p != NULL)
    {
        if( strcmp(p->cmd, cmd) == 0)
        {
            return p;
        }
        p = (tDataNode_real *)(p->tlinktablenode);
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


tLinkTable * CreateCommandList(tDataNode *head)
{
    int i;
    tDataNode_real *DataHead;
    tDataNode_real *DataCurrent;
    tLinkTable *linktable;

    DataHead = malloc(sizeof(tDataNode_real));
    if (DataHead == NULL)
    {
        printf("Wrong in malloc to tDataNode, not enough memory.\n");
        exit (FAILURE);
    }

    linktable = CreateLinkTable();
    if (linktable == NULL)
    {
        printf("Wrong in createLinkTable.\n");
        exit (FAILURE);
    }

    i = 0;

    tLinkTableNode * CurrentLinkTableNode;
    CurrentLinkTableNode = GetLinkTableHead(linktable);
    DataCurrent = DataHead;

    CurrentLinkTableNode->pNext = (tLinkTableNode *)DataCurrent;
    CurrentLinkTableNode = CurrentLinkTableNode->pNext;
    CurrentLinkTableNode->pNext = NULL;

    DataCurrent->cmd = head[i].cmd;
    DataCurrent->desc = head[i].desc;
    DataCurrent->handler = head[i].handler;

    while (head[i].next != NULL)
    {
        i++;
        DataCurrent = malloc(sizeof(tDataNode_real));

        CurrentLinkTableNode->pNext = (tLinkTableNode *)DataCurrent;
        CurrentLinkTableNode = CurrentLinkTableNode->pNext;
        CurrentLinkTableNode->pNext = NULL;

        DataCurrent->cmd = head[i].cmd;
        
        DataCurrent->desc = head[i].desc;
        DataCurrent->handler = head[i].handler;

        
    }

    return linktable;
}

int DeleteCommandList(tLinkTable * linktable)
{
    DeleteLinkTable(linktable);
    return SUCCESS;
}
