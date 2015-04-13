#ifndef COMMAND_H
#define COMMAND_H

#include <QString>

class Command
{
public:
    virtual void undo() = 0;

protected:
    Command(void* target);
    ~Command();

    void* target;
};

#endif // COMMAND_H
