/*
Provide an interface for creating families of related or dependent objects
without specifying their concrete classes.
==> Pros:
    - Avoid compile time implementation dependencies.
    - Ensures creating consistent object families
==> Cons:
    - Adding a new products is difficult

==> When using:
    - Want to provide instances to clients without exposing concrete class
    - Want to configure a system with one of multiple product configs
    - A system should be able to use classes only from one family at a time and you wanna enforce that.
*/


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