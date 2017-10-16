#pragma once

#include "linktable.h"


typedef struct DataNode
{
    char* cmd;
    char* desc;
    int (*handler)();
    struct DataNode *next;
} tDataNode;

typedef struct DataNode_real
{
    tLinkTableNode *tlinktablenode;
    char* cmd;
    char* desc;
    int (*handler)();
} tDataNode_real;

tDataNode_real * findCmd(tLinkTable *, char* cmd);

int showAllCmd(tDataNode* head);

tLinkTable * CreateCommandList(tDataNode *head);

int DeleteCommandList(tLinkTable *);
