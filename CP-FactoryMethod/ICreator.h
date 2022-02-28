#pragma once
#include"IProduct.h"

class ICreator {
private:
   IProduct* m_pProduct;

public:
   void operation() {
      m_pProduct = createProduct();
      m_pProduct->doSomething();
   }

public:
   virtual IProduct* createProduct()=0;
};
