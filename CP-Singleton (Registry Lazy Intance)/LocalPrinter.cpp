#include "LocalPrinter.h"
#include"PrinterProvider.h"
#include<iostream>

PrinterPtr LocalPrinter::GetInstance()
{
    // TODO: insert return statement here
   return std::shared_ptr <LocalPrinter>{ new LocalPrinter{} };
}

void LocalPrinter::Print(const std::string& data)
{
   std::cout << "[LOCAL_PRINTER]" << data << "\n";
}
