#include"SqlConnection.h"
#include"SqlCommand.h"
#include"IRecordSet.h"
#include"IDatabaseFactory.h"
#include"DbAbstractFactory.h"
#include"SqlFactory.h"
#include"MongoFactory.h"
#include<iostream>

// Old Implementation
void old()
{
   SqlConnection* pCon = new SqlConnection{};
   pCon->SetConnectionString("uid=xxx;db=movies;table=movie");
   pCon->open();

   SqlCommand* pCmd = new SqlCommand{};
   pCmd->SetConnection(pCon);
   pCmd->SetCommand("SELECT * FROM movie");

   IRecordSet* pRec = pCmd->executeQuery();
   while (pRec->hasRecord()) {
      std::cout << pRec->getRecords() << std::endl;
   }

   delete pCon; delete pCmd; delete pRec;
}

// Factory Implementation
void FactoryMethod()
{
   IConnection* pCon{ IDatabaseFactory::CreateConnection("mongo") };
   pCon->SetConnectionString("uid=xxx;db=movies;table=movie");
   pCon->open();

   ICommand* pCmd{ IDatabaseFactory::CreateCommand("mongo") };
   pCmd->SetConnection(pCon);
   pCmd->SetCommand("SELECT * FROM movie");

   IRecordSet* pRec = pCmd->executeQuery();
   while (pRec->hasRecord()) {
      std::cout << pRec->getRecords() << std::endl;
   }

   delete pCon; delete pCmd; delete pRec;
}

void AbstractFactoryMethod(DbAbstractFactory* pFactory)
{
   IConnection* pCon = pFactory->CreateConnection();
   pCon->SetConnectionString("uid=xxx;db=movies;table=movie");
   pCon->open();

   ICommand* pCmd = pFactory->CreateCommand();
   pCmd->SetConnection(pCon);
   pCmd->SetCommand("SELECT * FROM movie");

   IRecordSet* pRec = pCmd->executeQuery();
   while (pRec->hasRecord()) {
      std::cout << pRec->getRecords() << std::endl;
   }

   delete pCon; delete pCmd; delete pRec;
}

int main()
{
   MongoFactory f;
   AbstractFactoryMethod(&f);
   return 0;
}