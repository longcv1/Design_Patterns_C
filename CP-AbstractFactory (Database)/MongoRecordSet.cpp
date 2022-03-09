#include "MongoRecordSet.h"

MongoRecordSet::MongoRecordSet()
{
   m_Cursor = m_MongoDb.begin();
}

const std::string& MongoRecordSet::getRecords()
{
   return *m_Cursor++;
}

bool MongoRecordSet::hasRecord()
{
   return m_Cursor != m_MongoDb.end();
}
