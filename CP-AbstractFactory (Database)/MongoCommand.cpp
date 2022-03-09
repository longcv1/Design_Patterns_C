#include "MongoCommand.h"
#include<iostream>
#include"IConnection.h"
#include"MongoRecordSet.h"

void MongoCommand::executeCommand()
{
   std::cout
      << "[MongoCommand] Executing command with "
      << m_pConnection->GetConnectionString()
      << std::endl;
}

IRecordSet* MongoCommand::executeQuery()
{
   std::cout << "[MongoCommand] Executing query\n";
   return new MongoRecordSet();
}

