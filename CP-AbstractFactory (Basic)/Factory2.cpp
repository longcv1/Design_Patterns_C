#include "Factory2.h"
#include"FamilyProductA.h"
#include"FamilyProductB.h"
#include<iostream>

IProductA* Factory2::CreateProductA()
{
   std::cout << "Created Product A2\n";
   return new ProductA2{};
}

IProductB* Factory2::CreateProductB()
{
   std::cout << "Created Product B2\n";
   return new ProductB2{};
}