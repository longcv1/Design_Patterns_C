#pragma once
#include "DbAbstractFactory.h"
class SqlFactory : public DbAbstractFactory
{
public:
   IConnection* CreateConnection() override;
   ICommand* CreateCommand() override;
};

