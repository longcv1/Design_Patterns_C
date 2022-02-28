#pragma once
#include "ICreator.h"
class ConcreteCreator2 :
    public ICreator
{
public:
   IProduct* createProduct() override;
};

