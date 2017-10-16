/*******************************************************************************
 * Author	 : acrididcheng
 * Email	 : chenghuaming@aliyun.com
 * First Created : 2017-10-15 23:29
 * Filename	 : linktable.c
 * Description	 : Implementation of LinkTable module
 * *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "linktable.h"

tLinkTable * CreateLinkTable()
{
    tLinkTable * linktable = malloc(sizeof(tLinkTable));
    if (linktable == NULL)
    {
        printf("Error in Creating LinkTable, not enough memory\n");
        exit(FAILURE);
    }
    tLinkTableNode * linktablehead = malloc(sizeof(tLinkTableNode));
    if (linktablehead == NULL)
    {
        printf("Error in Creating LinkTableNode, not enough memory\n");
        exit(FAILURE);
    }

    linktablehead->pNext = NULL;

    linktable->pHead = linktablehead;
    linktable->pTail = linktablehead;
    linktable->SumOfNode = 0;

    return linktable;
}

int DeleteLinkTable(tLinkTable * linktable)
{
    tLinkTableNode *CurrentLinkTableNode;
    tLinkTableNode *NextLinkTableNode;

    if (linktable == NULL)
    {
        printf("Wrong use of DeleteLinkTable, no linktable exist.\n");
        return FAILURE;
    }

    while(linktable->pTail != NULL)
    {    
        CurrentLinkTableNode = GetLinkTableHead(linktable);
        NextLinkTableNode = GetNextLinkTableNode(linktable, CurrentLinkTableNode);
        if (NextLinkTableNode == NULL)
        {
            free(CurrentLinkTableNode);
            free(linktable);
            break;
        }
        while (NextLinkTableNode->pNext != NULL)
        {
            CurrentLinkTableNode = NextLinkTableNode;
            NextLinkTableNode = GetNextLinkTableNode(linktable, CurrentLinkTableNode);
        }

        free(NextLinkTableNode);
        CurrentLinkTableNode->pNext == NULL;
        linktable->pTail = CurrentLinkTableNode;
    }

    return SUCCESS;
}

int AddLinkTableNode(tLinkTable *linktable, tLinkTableNode *linktablenode)
{
    tLinkTableNode *CurrentLinkTableNode;

    if (linktable == NULL)
    {
        printf("Wrong use of AddLinkTableNode, no linktable exist.\n");
        return FAILURE;
    }
    if (linktablenode == NULL)
    {
        printf("Wrong use of AddLinkTableNode, no linktablenode exist.\n");
        return FAILURE;
    }

    CurrentLinkTableNode = GetLinkTableHead(linktable);
    while (CurrentLinkTableNode->pNext != NULL)
    {
        CurrentLinkTableNode = GetNextLinkTableNode(linktable, CurrentLinkTableNode);
    }

    CurrentLinkTableNode->pNext = linktablenode;
    linktablenode->pNext == NULL;

    return SUCCESS;
}

int DeleteLinkTableNode(tLinkTable *linktable, tLinkTableNode *linktablenode)
{
    tLinkTableNode *CurrentLinkTableNode;

    if (linktable == NULL)
    {
        printf("Wrong use of DeleteLinkTableNode, no linktable exist.\n");
        return FAILURE;
    }

    if (linktablenode == NULL)
    {
        printf("Wrong use of DeleteLinkTableNode, no linktablenode exist.\n");
        return FAILURE;
    }

    CurrentLinkTableNode = GetLinkTableHead(linktable);
    while (CurrentLinkTableNode->pNext != NULL)
    {
        if (CurrentLinkTableNode->pNext == linktablenode)
        {
            CurrentLinkTableNode->pNext = linktablenode->pNext;
            free(linktablenode);
            return SUCCESS;
        }
        CurrentLinkTableNode = GetNextLinkTableNode(linktable, CurrentLinkTableNode);
    }

    return FAILURE;
}

tLinkTableNode * GetLinkTableHead(tLinkTable *linktable)
{
    if (linktable == NULL)
    {
        printf("Wrong use of GetLinkTableHead, no linktable exist.\n");
        exit(FAILURE);
    }
    return linktable->pHead;
}

tLinkTableNode * GetNextLinkTableNode(tLinkTable *linktable, tLinkTableNode *linktablenode)
{
    if (linktable == NULL)
    {
        printf("Wrong use of GetNextLinkTableNode, no linktable exist.\n");
        exit(FAILURE);
    }
    if (linktablenode == NULL)
    {
        printf("Wrong use of GetNextLinkTableNode, no linktablenode exist.\n");
        exit(FAILURE);
    }

    return linktablenode->pNext;
}


