#pragma once
#include<vector>

class Format;

class DataModel
{
   std::vector<std::vector<int>> m_Sheet{};
   Format* m_pFormat{};

public:
   auto GetData() { return m_Sheet; }
   void AddRow(std::vector<int> data);
   void Display();
   void Load();
   void Save();
   void Export();

public:
   void SetFormat(Format* pFormat) {
      m_pFormat = pFormat;
   }
};

