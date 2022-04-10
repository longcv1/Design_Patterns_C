#pragma once
#include<fstream>
#include"Format.h"

class CSVFormat : public Format
{
   std::ofstream m_OStream{};
public:
   CSVFormat(const std::string& filename);
   void ExportData(DataModel* data) override;
};

