#pragma once
#include<list>

class IObserver;

class Subject
{
private:
   std::list<IObserver*> m_Observer{};

public:
   void Attach(IObserver* pObserver);
   void Detach(IObserver* pObserver);
   void Notify();
   virtual ~Subject() = default;
};

