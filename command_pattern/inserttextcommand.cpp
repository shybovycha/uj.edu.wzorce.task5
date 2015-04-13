#include "inserttextcommand.h"

InsertTextCommand::InsertTextCommand(QTextEdit* e) : TextEditCommand(e)
{
}

InsertTextCommand::~InsertTextCommand()
{
}

void InsertTextCommand::exec(int position, QString text) {
    this->oldText = this->getEdit()->toPlainText();
    QString tmp = this->oldText;
    this->getEdit()->setPlainText(tmp.insert(position, text));
}
