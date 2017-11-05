/*******************************************************************************
 * Author	 : acrididcheng
 * Email	 : chenghuaming@aliyun.com
 * First Created : 2017-11-04 23:32
 * Filename	 : test.c
 * Description	 : 
 * *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "linktable.h"

int Quit(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: quit [-h/-t]\n");
        return FAILURE;
    }
    printf("%s\n",argv[1]);
    if (strcmp(argv[1],"-h") == 0)
    {
        ;
    }
    if (strcmp(argv[1],"-t") == 0)
    {
        printf("Bye~~^_^\n");
    }
    exit(0);
}

int main()
{
    MenuConfig("version","menu Independent version 1.0.",NULL);
    MenuConfig("quit","quit from the menu",Quit);
    ExecuteMenu();

    return 0;
}

