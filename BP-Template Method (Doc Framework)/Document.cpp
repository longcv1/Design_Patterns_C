#include "Document.h"
#include<iostream>
#include <string>

std::string Document::FileDialog(DialogType type) const
{
   std::string filename{};
   if (type == DialogType::SAVE) {
      std::cout << "Name of file to save? ";
   }
   else if (type == DialogType::LOAD) {
      std::cout << "Name of file to load? ";
   }
   std::getline(std::cin, filename);
   return filename;
}

void Document::WriteVersion(std::ofstream& out)
{
}

void Document::ReadVersion(std::ifstream& in)
{
}

void Document::Save()
{
   if (!m_IsModified) {
      std::cout << "Already saved\n";
      return;
   }
   std::ofstream out{ FileDialog(DialogType::SAVE) };
   WriteVersion(out);
   WriteData(out);
   m_IsModified = false;
   std::cout << "----- File saved successfully ------ \n";
}

void Document::Load()
{
   if (!m_IsModified) {
      std::cout << "Already saved\n";
      return;
   }
   std::ifstream in{ FileDialog(DialogType::LOAD) };
   ReadVersion(in);
   ReadData(in);
   std::cout << "----- File loaded successfully ------ \n";
}
