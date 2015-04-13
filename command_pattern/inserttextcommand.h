#ifndef INSERTTEXTCOMMAND_H
#define INSERTTEXTCOMMAND_H

#include "texteditcommand.h"

class InsertTextCommand : public TextEditCommand
{
public:
    InsertTextCommand(QTextEdit* e);
    ~InsertTextCommand();

    void exec(int position, QString text);
};

#endif // INSERTTEXTCOMMAND_H
