#include "removetextcommand.h"

RemoveTextCommand::RemoveTextCommand(QTextEdit* e) : TextEditCommand(e)
{
}

RemoveTextCommand::~RemoveTextCommand()
{
}

void RemoveTextCommand::exec(int position, int length) {
    this->oldText = this->getEdit()->toPlainText();
    QString tmp = this->oldText;
    this->getEdit()->setPlainText(tmp.remove(position, length));
}
