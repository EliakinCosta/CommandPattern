#ifndef UPPERCASECOMMAND_H
#define UPPERCASECOMMAND_H

#include "icommand.h"

class UpperCaseCommand
{
public:
    UpperCaseCommand();
    virtual ~UpperCaseCommand(){}
    virtual void redo();
    virtual void undo();
};

#endif // UPPERCASECOMMAND_H
