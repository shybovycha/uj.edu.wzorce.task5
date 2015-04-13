#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include "command.h"
#include "inserttextcommand.h"
#include "removetextcommand.h"

#include <QList>
#include <QTextEdit>
#include <QKeyEvent>
#include <QObject>

class MyTextEdit : public QTextEdit
{
    Q_OBJECT

public:
    MyTextEdit();
    ~MyTextEdit();

    void keyPressEvent(QKeyEvent *evt);

protected:
    QList<Command*> commands;
};

#endif // MYTEXTEDIT_H
