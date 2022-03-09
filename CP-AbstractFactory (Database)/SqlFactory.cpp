#include "SqlFactory.h"
#include"SqlConnection.h"
#include"SqlCommand.h"

IConnection* SqlFactory::CreateConnection()
{
   return new SqlConnection{};
}

ICommand* SqlFactory::CreateCommand()
{
   return new SqlCommand{};
}
