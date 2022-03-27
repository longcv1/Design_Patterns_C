#pragma once
#include"Builder.h"
#include<iostream>

class Director {
private:
   Builder* m_Builder;

public:
   Director(Builder* builder) : m_Builder{ builder } {};
   void CreateProduct() {
      std::cout << "[Director] Construction Product is processing...." << std::endl;
      m_Builder->BuildParts();
   }
};

