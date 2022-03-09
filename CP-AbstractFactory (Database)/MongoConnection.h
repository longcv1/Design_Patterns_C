#pragma once
#include "IConnection.h"
class MongoConnection :
    public IConnection
{
public:
   void open() override;
};

