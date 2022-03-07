#include "Factory1.h"
#include"FamilyProductA.h"
#include"FamilyProductB.h"
#include<iostream>

IProductA* Factory1::CreateProductA()
{
   std::cout << "Created Product A1\n";
   return new ProductA1{};
}

IProductB* Factory1::CreateProductB()
{
   std::cout << "Created Product B1\n";
   return new ProductB1{};
}
