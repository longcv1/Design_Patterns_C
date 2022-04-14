#pragma once
#include "Document.h"
#include<string>

class NumberDocument :
    public Document
{
private:
   int m_Number{};
   std::string m_Data{};
public:
   void Load() override;
   void Save() override;
   void SetNumber(int num);
   void SetData(std::string data);
   void Print();
};

