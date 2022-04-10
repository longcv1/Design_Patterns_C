#pragma once
#include "Format.h"
#include <fstream>
class HtmlFormat :
    public Format
{
   std::ofstream m_OStream{};
public:
   HtmlFormat(const std::string& filename);
   void ExportData(DataModel* data) override;
};

