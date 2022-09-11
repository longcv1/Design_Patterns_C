#include "ConcreteColleague1.h"
#include <iostream>
#include "Mediator.h"

void ConcreteColleague1::sendMessageA()
{
   std::cout << "[Colleague1] Sending the message A....\n";
   m_pMediator->onInvoke(this);
}

void ConcreteColleague1::sendMessageB()
{
   std::cout << "[Colleague1] Receiving the message B!\n";
}

std::string ConcreteColleague1::getType() const
{
   return "cc1";
}
