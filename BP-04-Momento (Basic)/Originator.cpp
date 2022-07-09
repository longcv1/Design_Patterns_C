#include "Originator.h"
#include <iostream>

void Originator::Input()
{
   std::getline(std::cin, m_State);
}

void Originator::PrintState()
{
   std::cout << "\n ----State: " << m_State << '\n';
}

Memento Originator::CreateMemento()
{
   return m_State;
}

void Originator::SetMemento(Memento m)
{
   m_State = m.GetState();
}
