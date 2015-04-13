#ifndef REMOVETEXTCOMMAND_H
#define REMOVETEXTCOMMAND_H

#include "texteditcommand.h"

class RemoveTextCommand : public TextEditCommand
{
public:
    RemoveTextCommand(QTextEdit* e);
    ~RemoveTextCommand();

    void exec(int position, int length);
};

#endif // REMOVETEXTCOMMAND_H
