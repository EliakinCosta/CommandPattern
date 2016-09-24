#include "stackcommand.h"
#include "icommand.h"
#include <QDebug>

StackCommand::StackCommand():m_commandStack(new QList<ICommand *>()),
                             m_currentIndex(0)
{

}

StackCommand::~StackCommand()
{
    delete []m_commandStack;
}


void StackCommand::push(ICommand *command)
{
    if (this->m_currentIndex == (this->m_commandStack->length() - 1))
    {
        this->m_commandStack->erase(this->m_commandStack->begin(), this->m_commandStack->end());
    }
    m_currentIndex++;
    this->m_commandStack->append(command);
    command->redo();
}

void StackCommand::undo()
{
    qDebug() << m_currentIndex;
    if(this->m_currentIndex==0)
        return;
    this->m_commandStack->at(this->m_currentIndex-1)->undo();
    this->m_currentIndex--;
}

void StackCommand::redo()
{
    if(this->m_currentIndex==(this->m_commandStack->length()-1) && this->m_commandStack->isEmpty())
        return;
    this->m_currentIndex++;
    this->m_commandStack->at(this->m_currentIndex-1)->redo();
}
