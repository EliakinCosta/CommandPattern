#include "uppercasecommand.h"

UpperCaseCommand::UpperCaseCommand(QString *document):m_document(document),
                                                     m_oldDocument(*document)
{

}

UpperCaseCommand::~UpperCaseCommand()
{
    delete m_document;
}

void UpperCaseCommand::redo()
{
    *this->m_document = this->m_document->toUpper();
}


void UpperCaseCommand::undo()
{
    *this->m_document = this->m_oldDocument;
}
