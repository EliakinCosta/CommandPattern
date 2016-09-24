#ifndef APPENDCOMMAND_H
#define APPENDCOMMAND_H

#include "icommand.h"
#include <QString>

class AppendCommand : public ICommand
{
public:
    AppendCommand(QString *document, QString text);
    virtual ~AppendCommand();
    virtual void redo();
    virtual void undo();
private:
    QString *m_document;
    QString m_text;
};

#endif // APPENDCOMMAND_H
