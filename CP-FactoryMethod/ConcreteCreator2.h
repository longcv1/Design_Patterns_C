#pragma once
#include<iostream>
#include "ICreator.h"
#include"ConcreteProduct2.h"

class ConcreteCreator2 :
    public ICreator
{
public:
   IProduct* createProduct() override {
      std::cout << "Create Product 2\n";
      return new ConcreteProduct2{};
   }
};

