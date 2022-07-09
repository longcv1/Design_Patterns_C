#pragma once
#include<string>

class Memento
{
   std::string m_State{};
public:
   Memento() = default;
   Memento(const std::string& state) : m_State{ state } {};
   void SetState(const std::string& state);
   const std::string& GetState() const;
};

