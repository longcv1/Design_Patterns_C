#pragma once
class Command;
class Invoker
{
private:
   Command* m_pCommand;
public:
   void invoke();
   void setCommand(Command* command);
};

