#include "SqlRecordSet.h"

SqlRecordSet::SqlRecordSet()
{
   m_Cursor = m_SqlDb.begin();
}

const std::string& SqlRecordSet::getRecords()
{
   return *m_Cursor++;
}

bool SqlRecordSet::hasRecord()
{
   return m_Cursor != m_SqlDb.end();
}
