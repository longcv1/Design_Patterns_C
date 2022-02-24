#include "ConcreteCreator.h"
#include"ConcreteProduct.h"

IProduct* ConcreteCreator::productFactory()
{
   return new ConcreteProduct{};
}
