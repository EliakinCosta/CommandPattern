#include "appendcommand.h"
#include <QString>

AppendCommand::AppendCommand(QString *document, QString text):m_document(document), m_text(text)
{

}

AppendCommand::~AppendCommand()
{
    delete m_document;
}

void AppendCommand::redo()
{
    this->m_document->append(this->m_text);
}

void AppendCommand::undo()
{
    int length = this->m_document->length();
    if(length)
    {
        this->m_document->remove((length-this->m_text.length()), length);
    }
}
