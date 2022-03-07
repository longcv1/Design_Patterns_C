#pragma once
#include "IProductB.h"
#include<iostream>

class ProductB1 : public IProductB
{
public:
   void Product_B() override {
      std::cout << "Function Product B1!" << std::endl;
   }
};

class ProductB2 : public IProductB
{
public:
   void Product_B() override {
      std::cout << "Function Product B2!" << std::endl;
   }
};