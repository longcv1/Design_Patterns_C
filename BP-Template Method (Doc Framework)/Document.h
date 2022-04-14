#pragma once
#include<fstream>

class Document
{
protected:
   std::fstream m_Stream{};
   bool m_isModified{ false };

public:
   virtual void Save() = 0;
   virtual void Load() = 0;
   virtual ~Document() = default;
};

