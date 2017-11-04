/*******************************************************************************
 * Author	 : acrididcheng
 * Email	 : chenghuaming@aliyun.com
 * First Created : 2017-11-04 23:32
 * Filename	 : test.c
 * Description	 : 
 * *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "linktable.h"

int Quit()
{
    exit(0);
}

int main()
{
    MenuConfig("version","menu Independent version 1.0.",NULL);
    MenuConfig("quit","Bye~~",Quit);
    ExecuteMenu();

    return 0;
}

