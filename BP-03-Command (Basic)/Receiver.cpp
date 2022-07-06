#include "Receiver.h"
#include <iostream>

void Receiver::action()
{
   std::cout << "[Receiver] Handling request\n";
}

void Receiver::execute()
{
   this->action();
}
