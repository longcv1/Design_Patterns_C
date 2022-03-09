#include "MongoFactory.h"
#include"MongoCommand.h"
#include"MongoConnection.h"

IConnection* MongoFactory::CreateConnection()
{
   return new MongoConnection{};
}

ICommand* MongoFactory::CreateCommand()
{
   return new MongoCommand{};
}
