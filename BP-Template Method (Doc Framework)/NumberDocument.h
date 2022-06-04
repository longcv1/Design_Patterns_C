#pragma once
#include "Document.h"
#include<string>

// NOT USING TEMPLATE METHOD

/*
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
*/

class NumberDocument : public Document
{
private:
   int m_Number{};
   std::string m_Data{};
   std::string m_Version{};

protected:
   void ReadData(std::ifstream& in) override;
   void ReadVersion(std::ifstream& in) override;
   void WriteData(std::ofstream& out) override;
   void WriteVersion(std::ofstream& out) override;

public:
   void SetNumber(int num);
   void SetData(std::string data);
   void Print();
};

