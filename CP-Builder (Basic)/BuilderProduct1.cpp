#include "BuilderProduct1.h"
#include<iostream>

BuilderProduct1::BuilderProduct1()
{
   product = nullptr;
   std::cout << "Constructor BuilderProduct1() \n";
}

void BuilderProduct1::BuildParts()
{
   product = new Product{};
   std::cout << "Building......" << std::endl;
   std::cout << "Build Part A Done" << std::endl;
   std::cout << "Build Part B Done" << std::endl;
   std::cout << "Build Part C Done" << std::endl;
}
Product* BuilderProduct1::getResult()
{
   std::cout << "[Builder Product 1] Return Product 1" << std::endl;
   return product;
}