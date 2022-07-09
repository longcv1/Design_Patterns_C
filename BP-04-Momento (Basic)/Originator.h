#pragma once
#include<string>
#include"Memento.h"

class Originator
{
private:
   std::string m_State{};

public:
   void Input();
   void PrintState();
   Memento CreateMemento();
      void SetMemento(Memento m);
};

