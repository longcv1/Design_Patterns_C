#pragma once
#include "DbAbstractFactory.h"
class MongoFactory :
    public DbAbstractFactory
{
public:
   IConnection* CreateConnection() override;
   ICommand* CreateCommand() override;
};

