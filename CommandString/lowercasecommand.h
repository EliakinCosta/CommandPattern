#ifndef LOWERCASECOMMAND_H
#define LOWERCASECOMMAND_H

#include "icommand.h"
#include <QList>

class LowerCaseCommand: public ICommand
{
public:
    LowerCaseCommand(QString *document);
    virtual ~LowerCaseCommand();
    virtual void redo();
    virtual void undo();
private:
    QString *m_document;
    QString m_oldDocument;
};

#endif // LOWERCASECOMMAND_H
