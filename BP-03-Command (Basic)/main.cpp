#include<iostream>
#include"Receiver.h"
#include"Invoker.h"
#include"Command.h"
int main()
{
   Receiver rc;
   Command* cmd = &rc;
   Invoker iv;
   iv.setCommand(cmd);
   iv.invoke();
   return 0;
}