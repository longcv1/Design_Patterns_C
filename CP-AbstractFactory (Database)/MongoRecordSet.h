#pragma once
#include "IRecordSet.h"
#include<vector>

class MongoRecordSet :
    public IRecordSet
{
private:
   const std::vector<std::string> m_MongoDb{
      "mongo-actor 1",
      "mongo-actor 2",
      "mongo-actor 3",
      "mongo-actor 4",
      "mongo-actor 5",
   };
   std::vector<std::string>::const_iterator m_Cursor;
public:
   MongoRecordSet();
   const std::string& getRecords() override;
   bool hasRecord() override;
};

