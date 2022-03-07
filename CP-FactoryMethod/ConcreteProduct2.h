#pragma once
#include<iostream>
#include "IProduct.h"

class ConcreteProduct2 :
    public IProduct
{
public:
   void doSomething() override;
};

void ConcreteProduct2::doSomething()
{
   std::cout << __FUNCSIG__ << std::endl;
}
