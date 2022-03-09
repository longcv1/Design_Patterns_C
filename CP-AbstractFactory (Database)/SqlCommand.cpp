#include "SqlCommand.h"
#include<iostream>
#include"IConnection.h"
#include"SqlRecordSet.h"

void SqlCommand::executeCommand()
{
   std::cout
      << "[SqlCommand] Executing command with "
      << m_pConnection->GetConnectionString()
      << std::endl;
}

IRecordSet* SqlCommand::executeQuery()
{
   std::cout << "[SqlCommand] Executing query\n";
   return new SqlRecordSet();
}
