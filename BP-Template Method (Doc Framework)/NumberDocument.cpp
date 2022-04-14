#include "NumberDocument.h"
#include<iostream>

void NumberDocument::Load()
{
   if (m_isModified) {
      std::cout << "save current change first\n";
      return;
   }
   std::cout << "Name of file to load? ";
   std::string filename{};
   std::getline(std::cin, filename);
   m_Stream.open(filename, m_Stream.in);
   std::string version{};
   m_Stream >> version;
   if (version == "v1.0") {
      m_Stream >> m_Number;
   }
   else if (version == "v2.0") {
      m_Stream >> m_Number;
      m_Stream >> m_Data;
   }
}

void NumberDocument::Save()
{
   if (!m_Stream.is_open()) {
      std::cout << "Name of the file to save? ";
      std::string filename{};
      std::getline(std::cin, filename);
      m_Stream.open(filename, m_Stream.out);
   }
   m_Stream.seekp(0);
   m_Stream << "v2.0\n";
   m_Stream << m_Number << '\n';
   m_Stream << m_Data;
   m_isModified = false;
}

void NumberDocument::SetNumber(int num)
{
   m_Number = num;
   m_isModified = true;
}

void NumberDocument::SetData(std::string data)
{
   m_Data = std::move(data);
   m_isModified = true;
}

void NumberDocument::Print()
{
   std::cout << "Number Document: " << m_Number << "\n";
   std::cout << "Data is: " << m_Data << "\n";
}
