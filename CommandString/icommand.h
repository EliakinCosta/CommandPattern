#ifndef ICOMMAND_H
#define ICOMMAND_H


class ICommand
{
public:
    ICommand();
    virtual ~ICommand(){}
    virtual void redo() = 0;
    virtual void undo() = 0;
};

#endif // ICOMMAND_H
