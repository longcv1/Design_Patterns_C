#pragma once
#include"Product.h"

class Builder {
protected:
   Product* m_Product;
public:
   virtual void BuildParts() = 0;
   virtual ~Builder() = default;
};
