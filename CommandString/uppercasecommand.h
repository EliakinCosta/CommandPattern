#ifndef UPPERCASECOMMAND_H
#define UPPERCASECOMMAND_H

#include "icommand.h"
#include <QString>

class UpperCaseCommand: public ICommand
{
public:
    UpperCaseCommand(QString *document);
    virtual ~UpperCaseCommand();
    virtual void redo();
    virtual void undo();
private:
    QString *m_document;
    QString m_oldDocument;
};

#endif // UPPERCASECOMMAND_H
