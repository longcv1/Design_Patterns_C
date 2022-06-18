#include"Client.h"
#include"ConcretePrototype1.h"
#include"ConcretePrototype2.h"

int main()
{
   Client client;
   client.setPrototype(new ConcretePrototype1{});
   client.Operation();
   return 0;
}
