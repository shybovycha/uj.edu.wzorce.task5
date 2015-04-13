#ifndef TEXTEDITCOMMAND_H
#define TEXTEDITCOMMAND_H

#include "command.h"

#include <QTextEdit>

class TextEditCommand : public Command
{
public:
    virtual void undo();

protected:
    TextEditCommand(QTextEdit* e);
    ~TextEditCommand();

    QTextEdit* getEdit();

    QString oldText;
};

#endif // TEXTEDITCOMMAND_H
