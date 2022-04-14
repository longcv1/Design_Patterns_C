#include "TextDocument.h"
#include<iostream>
#include<string>

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
