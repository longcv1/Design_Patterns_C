#include "Invoker.h"
#include"Command.h"
void Invoker::invoke()
{
   m_pCommand->execute();
}

void Invoker::setCommand(Command* cmd)
{
   m_pCommand = cmd;
}
