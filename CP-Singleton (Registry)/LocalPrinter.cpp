#include "LocalPrinter.h"
#include"PrinterProvider.h"
#include<iostream>

LocalPrinter LocalPrinter::m_Instance;

LocalPrinter::LocalPrinter()
{
   PrinterProvider::RegisterPrinter("local", this);
}

LocalPrinter& LocalPrinter::GetInstance()
{
    // TODO: insert return statement here
   return m_Instance;
}

void LocalPrinter::Print(const std::string& data)
{
   std::cout << "[LOCAL_PRINTER]" << data << "\n";
}
