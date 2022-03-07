#pragma once
#include "IProductA.h"
#include<iostream>

class ProductA1 : public IProductA
{
public:
   void Product_A() override {
      std::cout << "Function Product A1!" << std::endl;
   }
};

class ProductA2 : public IProductA
{
public:
   void Product_A() override {
      std::cout << "Function Product A2!" << std::endl;
   }
};