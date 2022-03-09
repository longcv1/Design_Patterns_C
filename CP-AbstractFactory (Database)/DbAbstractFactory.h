#pragma once
class IConnection;
class ICommand;

class DbAbstractFactory
{
public:
   virtual IConnection* CreateConnection() = 0;
   virtual ICommand* CreateCommand() = 0;
   virtual ~DbAbstractFactory() = default;
};


