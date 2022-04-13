#pragma once
#include "IObserver.h"

class ConcreteSubject;

class ConcreteObserver :
    public IObserver
{
private:
   ConcreteSubject* m_pSubject{};
public:
   ConcreteObserver(ConcreteSubject* pSubject) : m_pSubject{ pSubject } {};
   void Update() override;
};

