#pragma once
#include "AbstractFactory.h"
class Factory2 :
    public AbstractFactory
{
public:
   IProductA* CreateProductA() override;
   IProductB* CreateProductB() override;
};

