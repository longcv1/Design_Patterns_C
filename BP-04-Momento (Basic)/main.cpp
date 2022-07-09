#include<iostream>
#include "Originator.h"
#include "CareTaker.h"


int main()
{
   CareTaker care;
   Originator ori;
   ori.Input();
   ori.PrintState();
   care.Save(ori.CreateMemento());

   ori.Input();
   ori.PrintState();

   std::cout << "Restore:\n";
   ori.SetMemento(care.Restore());
   ori.PrintState();
}