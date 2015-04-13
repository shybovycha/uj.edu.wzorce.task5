#include "mytextedit.h"

MyTextEdit::MyTextEdit()
{
}

MyTextEdit::~MyTextEdit()
{

}

void MyTextEdit::keyPressEvent(QKeyEvent *evt) {
    if (evt->modifiers().testFlag(Qt::ControlModifier) && evt->key() == Qt::Key_Z) {
        Command *lastCmd = this->commands.last();
        this->commands.pop_back();
        lastCmd->undo();
    } else if (evt->key() == Qt::Key_Backspace) {
        RemoveTextCommand *cmd = new RemoveTextCommand(this);
        this->commands.push_back(cmd);
        cmd->exec(this->toPlainText().size() - 1, 1);
    } else if (evt->text().size() > 0) {
        InsertTextCommand *cmd = new InsertTextCommand(this);
        this->commands.push_back(cmd);
        cmd->exec(this->toPlainText().size(), evt->text());
    }
}
