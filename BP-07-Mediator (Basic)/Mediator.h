#pragma once
class Colleague;
class Mediator
{
public:
   virtual void onInvoke(Colleague* pColleague) = 0;
   virtual ~Mediator() = default;
};

