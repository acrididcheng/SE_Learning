#pragma once

typedef struct DataNode
{
    char* cmd;
    char* desc;
    int (*handler)();
    struct DataNode *next;
} tDataNode;

tDataNode* findCmd(tDataNode* head, char* cmd);

int showAllCmd(tDataNode* head);
