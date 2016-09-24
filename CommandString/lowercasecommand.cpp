#include "lowercasecommand.h"

LowerCaseCommand::LowerCaseCommand(QString *document):m_document(document),
                                                      m_oldDocument(*document)
{

}

LowerCaseCommand::~LowerCaseCommand()
{
    delete m_document;
}

void LowerCaseCommand::redo()
{
    *this->m_document = this->m_document->toLower();
}

void LowerCaseCommand::undo()
{
    *this->m_document = this->m_oldDocument;
}
