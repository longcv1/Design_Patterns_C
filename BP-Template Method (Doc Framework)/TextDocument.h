#pragma once
#include "Document.h"
#include<string>

class TextDocument :
    public Document
{
private:
   std::string m_Text{};

public:
   void Load() override;
   void Save() override;
   void SetText(std::string text);
   void Print();
};

