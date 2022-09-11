#include "ConcreteMediator.h"

void ConcreteMediator::SetColleague(Colleague* c1, Colleague* c2)
{
   m_pColleague1 = c1;
   m_pColleague2 = c2;
}

void ConcreteMediator::onInvoke(Colleague* c)
{
   auto type = c->getType();
   if (type == "cc1") {
      m_pColleague2->sendMessageA();
   }
   else if (type == "cc2") {
      m_pColleague1->sendMessageB();
   }
}
