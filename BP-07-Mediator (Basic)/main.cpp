#include"ConcreteColleague1.h"
#include"ConcreteColleague2.h"
#include"ConcreteMediator.h"

int main() {
   ConcreteMediator cm{};
   ConcreteColleague1 cc1{&cm};
   ConcreteColleague2 cc2{&cm};

   cm.SetColleague(&cc1, &cc2);
   cc1.sendMessageA();
   cc2.sendMessageB();
}
