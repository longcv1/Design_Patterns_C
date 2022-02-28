#pragma once
#include "IProduct.h"
class ConcreteProduct1 :
    public IProduct
{
public:
   void doSomething() override;
};

