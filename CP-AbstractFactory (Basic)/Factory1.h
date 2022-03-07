#pragma once
#include "AbstractFactory.h"

class Factory1 : public AbstractFactory
{
public:
   IProductA* CreateProductA() override;
   IProductB* CreateProductB() override;
};

