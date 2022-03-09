#pragma once
#include "IConnection.h"
class SqlConnection :
    public IConnection
{
public:
   void open() override;
};

