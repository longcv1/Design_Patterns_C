#include "CSVFormat.h"
#include"DataModel.h"
#include<iostream>

CSVFormat::CSVFormat(const std::string& filename)
   : m_OStream{filename}
{
   if (!m_OStream) {
      throw std::runtime_error{ "Could not open the file" };
   }
}

void CSVFormat::ExportData(DataModel* data)
{
   for (auto row : data->GetData()) {
      for (auto e : row) {
         m_OStream << e << ',';
      }
      m_OStream << '\n';
   }
   std::cout << "\nFile exported successfully\n";
}
