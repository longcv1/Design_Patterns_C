#pragma once
#include"Prototype.h"

class Client
{
   Prototype* proto;
public:
   void setPrototype(Prototype* p) {
      proto = p;
   }
   void Operation() {
      auto p = proto->Clone();
   }
};

