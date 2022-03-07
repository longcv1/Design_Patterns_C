#include<iostream>
#include"AbstractFactory.h"
#include"Factory1.h"
#include"Factory2.h"

class Client {
private:
   AbstractFactory* factory1;
   AbstractFactory* factory2;

public:
   void operation() {
      /* FAMILY PRODUCT 1*/
      factory1 = new Factory1();
      IProductA* pA = factory1->CreateProductA();
      IProductB* pB = factory1->CreateProductB();

      pA->Product_A();
      pB->Product_B();

      delete pA; delete pB;

      /* FAMILY PRODUCT 2*/
      factory2 = new Factory2();
      pA = factory2->CreateProductA();
      pB = factory2->CreateProductB();

      pA->Product_A();
      pB->Product_B();

      delete pA; delete pB;
   }
};

int main()
{
   Client client;
   client.operation();
   return 0;
}