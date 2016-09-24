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
    if (this->m_currentIndex < (this->m_commandStack->length()))
    {
        for(int i=m_currentIndex;i<this->m_commandStack->length();i++)
            this->m_commandStack->removeAt(i);
    }
    m_currentIndex++;
    this->m_commandStack->append(command);
    command->redo();

}

bool StackCommand::undo()
{
    if(this->m_currentIndex==0)
        return false;
    this->m_commandStack->at(this->m_currentIndex-1)->undo();
    this->m_currentIndex--;
    return true;
}

bool StackCommand::redo()
{
    if(this->m_currentIndex==(this->m_commandStack->length()) || this->m_commandStack->isEmpty())
        return false;
    this->m_currentIndex++;
    this->m_commandStack->at(this->m_currentIndex-1)->redo();
    return true;
}
