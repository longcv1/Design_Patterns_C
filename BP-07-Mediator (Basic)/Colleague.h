#pragma once
#include <string>
class Mediator;
class Colleague
{
protected:
   Mediator* m_pMediator{};
public:
   Colleague(Mediator* mediator) :m_pMediator{ mediator } {};
   virtual void sendMessageA() = 0;
   virtual void sendMessageB() = 0;
   virtual std::string getType() const = 0;
   virtual ~Colleague() = default;
};

