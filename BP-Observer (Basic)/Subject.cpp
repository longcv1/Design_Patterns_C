#include "Subject.h"
#include"IObserver.h"

void Subject::Attach(IObserver* pObserver)
{
   m_Observer.push_back(pObserver);
}

void Subject::Detach(IObserver* pObserver)
{
   m_Observer.remove(pObserver);
}

void Subject::Notify()
{
   for (auto ob : m_Observer) {
      ob->Update();
   }
}
