#pragma once
#include<iostream>
#include "ICreator.h"
#include"ConcreteProduct1.h"

class ConcreteCreator1 : public ICreator
{
public:
   IProduct* createProduct() override {
      std::cout << "Create Product 1\n";
      return new ConcreteProduct1{};
   }
};

