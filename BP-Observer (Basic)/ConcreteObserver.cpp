#include "ConcreteObserver.h"
#include"ConcreteSubject.h"
#include<iostream>

void ConcreteObserver::Update()
{
   std::cout << "[ConcreteObserver] Received Notification. State is: "
      << m_pSubject->GetState() << std::endl;
}
