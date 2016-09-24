#ifndef STACKCOMMAND_H
#define STACKCOMMAND_H

#include <QList>

class ICommand;

class StackCommand
{
public:
    StackCommand();
    virtual ~StackCommand();
    void push(ICommand *command);
    void undo();
    void redo();
private:
    QList<ICommand *> *m_commandStack;
    int m_currentIndex;
};

#endif // STACKCOMMAND_H
