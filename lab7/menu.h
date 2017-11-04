/*******************************************************************************
 * Author	 : acrididcheng
 * Email	 : chenghuaming@aliyun.com
 * First Created : 2017-11-04 22:30
 * Filename	 : menu.h
 * Description	 : 
 * *****************************************************************************/

#pragma once
int MenuConfig(char *cmd, char *desc, int (*handler)());

int ExecuteMenu();
