/**************************************************************************************************/
//    >File Name: operation.c
//    >Author: AcrididCheng
//   >Mail: chenghuaming@aliyun.com
/**************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "dataclass.h"
#include "operation.h"

int Help()
{
    showAllCmd(head);
    return 0;

}

int Exit()
{
    printf("Thank you for using menu program, bye~~^_^\n");
    exit(0);
}

int Version()
{
    printf("This is version 1.0\n");
    return 0;
}

