#include "ConcreteCreator2.h"
#include"ConcreteProduct2.h"
#include<iostream>

IProduct* ConcreteCreator2::createProduct()
{
   std::cout << "Create Product 2\n";

   return new ConcreteProduct2{};
}
