#pragma once

#include "dataclass.h"
#include "linktable.h"

int Help();
int Exit();
int Version();

static tDataNode head[] = 
{
    {"help", "this is a help command", Help, &head[1]},
    {"version", "this is a version command", Version, &head[2]},
    {"exit", "exit program", Exit, NULL}
};

