#include "TextDocument.h"
#include<iostream>
#include<string>


// NOT USING TEMPLATE METHOD

/*
void TextDocument::Load()
{
   if (m_isModified) {
      std::cout << "save current change first\n";
      return;
   }
   std::cout << "Name of file to load? ";
   std::string filename{};
   std::getline(std::cin, filename);
   m_Stream.open(filename, m_Stream.in);
   std::getline(m_Stream, m_Text);
}

void TextDocument::Save()
{
   if (!m_Stream.is_open()) {
      std::cout << "Name of the file to save? ";
      std::string filename{};
      std::getline(std::cin, filename);
      m_Stream.open(filename, m_Stream.out);
   }
   m_Stream.seekp(0);
   m_Stream << m_Text;
   m_isModified = false;
}

void TextDocument::SetText(std::string text)
{
   m_Text = std::move(text);
   m_isModified = true;
}

void TextDocument::Print()
{
   std::cout << "Text Document: " << m_Text << "\n";
}
*/

void TextDocument::WriteData(std::ofstream& out)
{
   out.seekp(0);
   out << m_Text;
   SetModified(false);
}

void TextDocument::ReadData(std::ifstream& in)
{
   std::getline(in, m_Text);
}

void TextDocument::SetText(std::string text)
{
   m_Text = std::move(text);
   SetModified(true);
}

void TextDocument::Print()
{
   std::cout << "Text Document: " << m_Text << "\n";
}
