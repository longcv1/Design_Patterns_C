#pragma once
#include "IProduct.h"
class ConcreteProduct2 :
    public IProduct
{
public:
   void doSomething() override;
};

