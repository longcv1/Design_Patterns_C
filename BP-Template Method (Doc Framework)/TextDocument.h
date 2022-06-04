#pragma once
#include "Document.h"
#include<string>

// NOT USING TEMPLATE METHOD

/*
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
*/

class TextDocument : public Document
{
private:
   std::string m_Text{};

protected:
   void WriteData(std::ofstream& out) override;
   void ReadData(std::ifstream& in) override;

public:
   void SetText(std::string text);
   void Print();
};
