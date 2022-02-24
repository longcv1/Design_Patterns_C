#pragma once
#include"IProduct.h"
class ICreator {
   IProduct* m_pCreator;

public:
   void createProduct() {
      m_pCreator = productFactory();
      m_pCreator->operation();
   }
   virtual IProduct* productFactory() = 0;
};
