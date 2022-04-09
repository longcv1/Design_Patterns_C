#include "Context.h"
#include <iostream>

void Context::ContextInteface()
{
   if (m_pStrategy) {
      m_pStrategy->AlgorithmInterface();
   }
   else {
      std::cout << "Default Behavior\n";
   }
}

void Context::SetStrategy(IStrategy* p)
{
   m_pStrategy = p;
}
