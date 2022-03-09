#pragma once
#include<string>

class IRecordSet
{
public:
   virtual const std::string& getRecords() = 0;
   virtual bool hasRecord() = 0;
   virtual ~IRecordSet() = default;
};
