#include "ConcreteCreator1.h"
#include<iostream>
#include"ConcreteProduct1.h"

IProduct* ConcreteCreator1::createProduct()
{
   std::cout << "Create Product 1\n";
   return new ConcreteProduct1{};
}
