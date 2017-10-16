/*******************************************************************************
 * Author	 : acrididcheng
 * Email	 : chenghuaming@aliyun.com
 * First Created : 2017-10-15 23:12
 * Filename	 : linktable.h
 * Description	 :  A headfile of a general LinkTable Module
 * *****************************************************************************/

#pragma once

#include <pthread.h>

#define SUCCESS 0
#define FAILURE (-1)

typedef struct LinkTableNode
{
    struct LinkTableNode * pNext; 
}tLinkTableNode;

typedef struct LinkTable
{
    tLinkTableNode *pHead;
    tLinkTableNode *pTail;
    int SumOfNode;
//    pthread_mutex_t mutex;
}tLinkTable;

tLinkTable * CreateLinkTable();

int DeleteLinkTable(tLinkTable *);

int AddLinkTableNode(tLinkTable *, tLinkTableNode *);

int DeleteLinkTableNode(tLinkTable *, tLinkTableNode *);

tLinkTableNode * GetLinkTableHead(tLinkTable *);

tLinkTableNode * GetNextLinkTableNode(tLinkTable *, tLinkTableNode *);
