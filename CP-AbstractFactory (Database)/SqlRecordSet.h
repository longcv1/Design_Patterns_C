#pragma once
#include "IRecordSet.h"
#include<vector>

class SqlRecordSet :
    public IRecordSet
{
private:
   const std::vector<std::string> m_SqlDb{
      "sql-movie 1",
      "sql-movie 2",
      "sql-movie 3",
      "sql-movie 4",
      "sql-movie 5",
   };
   std::vector<std::string>::const_iterator m_Cursor;
public:
   SqlRecordSet();
   const std::string& getRecords() override;
   bool hasRecord() override;
};

