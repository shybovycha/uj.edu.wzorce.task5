#include "texteditcommand.h"

TextEditCommand::TextEditCommand(QTextEdit* e) : Command(e)
{
    this->oldText = this->getEdit()->toPlainText();
}

TextEditCommand::~TextEditCommand()
{
}

QTextEdit* TextEditCommand::getEdit() {
    return (QTextEdit*) this->target;
}

void TextEditCommand::undo() {
    this->getEdit()->setPlainText(this->oldText);
}
