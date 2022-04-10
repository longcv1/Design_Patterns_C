#include "HtmlFormat.h"
#include"DataModel.h"
#include<iostream>

HtmlFormat::HtmlFormat(const std::string& filename) : m_OStream{filename}
{
   if (!m_OStream) {
      throw std::runtime_error{ "Could not open the file" };
   }
}

void HtmlFormat::ExportData(DataModel* data)
{
   m_OStream.open("data.html");
   m_OStream
      << "<!DOCTYPE html>\n"
      << "<html>\n"
      << "<body>\n"
      << "<h1> Data Exported:</h1>\n";

   for (auto row : data->GetData()) {
      m_OStream << "<p>";
      for (auto e : row) {
         m_OStream << e << '   ';
      }
      m_OStream << "<p>\n";
   }
   m_OStream
      << "</body>\n"
      << "</html>\n";
}
