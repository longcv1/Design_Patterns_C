#include "NumberDocument.h"
#include<iostream>

// NOT USING TEMPLATE METHOD

/*
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
*/

void NumberDocument::ReadData(std::ifstream& in)
{
   if (m_Version == "v1.0") {
      in >> m_Number;
   }
   else if (m_Version == "v2.0") {
      in >> m_Number;
      in >> m_Data;
   }
}

void NumberDocument::ReadVersion(std::ifstream& in)
{
   in >> m_Version;
}

void NumberDocument::WriteData(std::ofstream& out)
{
   out.seekp(0);
   WriteVersion(out);
   out << m_Number << '\n';
   out << m_Data;
   SetModified(false);
}

void NumberDocument::WriteVersion(std::ofstream& out)
{
   out << "v2.0\n";
}

void NumberDocument::SetNumber(int num)
{
   m_Number = num;
   SetModified(true);
}

void NumberDocument::SetData(std::string data)
{
   m_Data = std::move(data);
   SetModified(true);
}

void NumberDocument::Print()
{
   std::cout << "Number is: " << m_Number << '\n';
   std::cout << "Data is: " << m_Data << '\n';
}
