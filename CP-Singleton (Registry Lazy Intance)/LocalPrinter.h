#pragma once
#include "IPrinter.h"
class LocalPrinter :
    public IPrinter
{
private:
 
   LocalPrinter() = default;
public:
   static PrinterPtr GetInstance();
   void Print(const std::string& data) override;
};

