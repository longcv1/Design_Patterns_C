#pragma once
#include "IStrategy.h"

class Context
{
private:
   IStrategy* m_pStrategy{};

public:
   void ContextInteface();
   void SetStrategy(IStrategy* p);
};

