#pragma once
#include"Command.h"
class Receiver : public Command
{
public:
   void action();
   virtual void execute() override;
};

