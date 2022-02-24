#include "ICreator.h"
#include "ConcreteCreator.h"
int main()
{
   ICreator* creator = new ConcreteCreator();
   creator->createProduct();
   return 0;
}
