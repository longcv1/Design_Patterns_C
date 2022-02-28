#pragma once
#include "ICreator.h"
class ConcreteCreator1 :
    public ICreator
{
public:
   IProduct* createProduct() override;
};

