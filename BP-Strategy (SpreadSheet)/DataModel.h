#pragma once
#include<vector>

class DataModel
{
   std::vector<std::vector<int>> m_Sheet{};

public:
   void AddRow(std::vector<int> data);
   void Display();
   void Load();
   void Save();
   void Export();
};

