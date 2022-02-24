#pragma once
#include "ICreator.h"
class ConcreteCreator :
    public ICreator
{
public:
   virtual IProduct* productFactory() override;
};

