#pragma once
#include "Mediator.h"
#include "Colleague.h"
class ConcreteMediator :
    public Mediator
{
   Colleague* m_pColleague1{};
   Colleague* m_pColleague2{};

public:
   void SetColleague(Colleague* c1, Colleague* c2);
   void onInvoke(Colleague* c) override;
};

