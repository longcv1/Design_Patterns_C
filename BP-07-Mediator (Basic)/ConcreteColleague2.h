#pragma once
#include "Colleague.h"
class ConcreteColleague2 :
    public Colleague
{
   using Colleague::Colleague;
public:
   void sendMessageA() override;
   void sendMessageB() override;
   std::string getType() const override;
};

