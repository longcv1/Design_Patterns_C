#pragma once
class DataModel;
class Format
{
public:
   virtual void ExportData(DataModel* pModel) = 0;
   virtual ~Format() = default;
};

