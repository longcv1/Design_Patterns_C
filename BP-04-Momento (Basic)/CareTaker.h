#pragma once
#include"Memento.h"

class CareTaker
{
   Memento m_Memento{};
public:
   void Save(Memento m);
   Memento Restore() const;
};

