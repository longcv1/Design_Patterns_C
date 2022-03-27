#pragma once
#include "Builder.h"
#include"Product.h"

class BuilderProduct1 :
    public Builder
{
private:
   Product* product;
public:
   BuilderProduct1();
   void BuildParts() override;
   Product* getResult();
};

