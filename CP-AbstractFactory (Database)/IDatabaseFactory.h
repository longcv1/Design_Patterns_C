#pragma once
#include<string_view>
#include"SqlConnection.h"
#include"SqlCommand.h"
#include"MongoConnection.h"
#include"MongoCommand.h"

class IConnection;
class ICommand;

class IDatabaseFactory
{
public:
   static IConnection* CreateConnection(std::string_view type);
   static ICommand* CreateCommand(std::string_view type);
};

IConnection* IDatabaseFactory::CreateConnection(std::string_view type)
{
   if (type == "sql") {
      return new SqlConnection();
   }
   else if (type == "mongo") {
      return new MongoConnection();
   }
   return nullptr;
}

ICommand* IDatabaseFactory::CreateCommand(std::string_view type)
{
   if (type == "sql") {
      return new SqlCommand();
   }
   else if (type == "mongo") {
      return new MongoCommand();
   }
   return nullptr;
}
