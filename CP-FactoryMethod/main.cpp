#include"ICreator.h"
#include"ConcreteCreator1.h"
#include"IProduct.h"

int main()
{
   ICreator* creator = new ConcreteCreator1();
   creator->operation();
}
