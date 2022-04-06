#pragma once
#include "IPrinter.h"
class LocalPrinter :
    public IPrinter
{
private:
   static LocalPrinter m_Instance;
   LocalPrinter();
public:
   static LocalPrinter& GetInstance();
   void Print(const std::string& data) override;
};

