#include "CareTaker.h"

void CareTaker::Save(Memento m)
{
   m_Memento = m;
}

Memento CareTaker::Restore() const
{
    return m_Memento;
}
