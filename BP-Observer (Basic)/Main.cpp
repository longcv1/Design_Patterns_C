#include"ConcreteObserver.h"
#include"ConcreteSubject.h"
#include<iostream>

int main()
{
   ConcreteSubject sub{};
   ConcreteObserver ob1{ &sub };
   ConcreteObserver ob2{ &sub };

   sub.Attach(&ob1);
   sub.Attach(&ob2);

   std::cout << "Changing state in the subject...." << std::endl;
   sub.SetState("Finished");
}