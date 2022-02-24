#pragma once
#include "IProduct.h"
class ConcreteProduct :
    public IProduct
{
public:
   virtual void operation() override;
};

