#pragma once
#include<iostream>
#include "IProduct.h"

class ConcreteProduct1 : public IProduct
{
public:
   void doSomething() override;
};


void ConcreteProduct1::doSomething()
{
   std::cout << __FUNCSIG__ << std::endl;
}
