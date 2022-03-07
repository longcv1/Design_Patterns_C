#pragma once
#include"IProductA.h"
#include"IProductB.h"

class AbstractFactory {
public:
   virtual IProductA* CreateProductA() = 0;
   virtual IProductB* CreateProductB() = 0;
   virtual ~AbstractFactory() = default;
};