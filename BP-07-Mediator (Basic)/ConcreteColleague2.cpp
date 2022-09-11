#include "ConcreteColleague2.h"
#include<iostream>
#include "Mediator.h"

void ConcreteColleague2::sendMessageA()
{
   std::cout << "[Colleage2] Receiving the message A!\n";
}

void ConcreteColleague2::sendMessageB()
{
   std::cout << "[Colleague2] Sending the message B....\n";
   m_pMediator->onInvoke(this);
}

std::string ConcreteColleague2::getType() const
{
   return "cc2";
}
