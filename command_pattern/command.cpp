#include "command.h"

Command::Command(void* target)
{
    this->target = target;
}

Command::~Command()
{
}

