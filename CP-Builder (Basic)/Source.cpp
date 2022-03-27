#include"Director.h"
#include"BuilderProduct1.h"
#include<iostream>


int main()
{
   BuilderProduct1 builder_product_1;
   Director dir{ &builder_product_1 };
   dir.CreateProduct();
   Product* p = builder_product_1.getResult();
   delete p;
}