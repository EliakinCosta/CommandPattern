#ifndef LOWERCASECOMMAND_H
#define LOWERCASECOMMAND_H

#include "icommand.h"

class LowerCaseCommand
{
public:
    LowerCaseCommand();
    virtual ~LowerCaseCommand(){}
    virtual void redo();
    virtual void undo();
};

#endif // LOWERCASECOMMAND_H
