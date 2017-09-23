/**************************************************************************************************/
/*   >File Name: forgebash.c                                                                      */
/*    >Author: AcrididCheng                                                                       */  
/*    >Mail: chenghuaming@aliyun.com                                                              */
/**************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "command.h"

int main()
{
    char cmd[128];

    printf("Thank you for using the forgebash program, type help for commands that sopport.\n");
    while(1)
    {
        scanf("%s",cmd);
        if (strcmp(cmd, "exit") == 0)
        {
            exit(0);
        }
        else if(strcmp(cmd, "help") == 0)
        {
            printf("\n");       //command1's description.... and so on
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("exit    ----    type 'exit' to terminal the forgebash program.\n");
        }
        else if(strcmp(cmd, "command1") == 0)
        {
            do_command1();
        }
        else if(strcmp(cmd, "command2") == 0)
        {
            do_command2();
        }
        else if(strcmp(cmd, "command3") == 0)
        {
            do_command3();
        }
        else if(strcmp(cmd, "command4") == 0)
        {
            do_command4();
        }
        else if(strcmp(cmd, "command5") == 0)
        {
            do_command5();
        }
        else if(strcmp(cmd, "command6") == 0)
        {
            do_command6();
        }
        else if(strcmp(cmd, "command7") == 0)
        {
            do_command7();
        }
    }
    return 0;
}
