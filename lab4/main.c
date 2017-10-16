/**************************************************************************************************/
//    >File Name: main.c
//    >Author: AcrididCheng
//   >Mail: chenghuaming@aliyun.com
/**************************************************************************************************/

#include <stdio.h>
#include "linktable.h"
#include "dataclass.h"
#include "operation.h"

#define CMD_MAX_LEN 128


int main()
{
    printf("Input a command, type help to see the commands!\n");
    tLinkTable *linktable = CreateCommandList(head);

    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Command -> ");
        scanf("%s",cmd);
        tDataNode_real *p = findCmd(linktable, cmd);
        if(p == NULL)
        {
            printf("Wrong input, Input again!\n");
            continue;
        }
        //printf("%s - %s\n", p->cmd, p->desc);
        if(p->handler != NULL)
        {
            p->handler();
        }
    }
    DeleteCommandList(linktable);

    return 0;
}


