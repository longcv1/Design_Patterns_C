#include "PrinterProvider.h"
#include<iostream>
void PrinterProvider::RegisterPrinter(const std::string& type, IPrinter* p)
{
   if (auto it = m_Printers.find(type); it == end(m_Printers)) {
      m_Printers[type] = p;
   }
   else {
      std::cout << "Already registered\n";
   }
}

IPrinter* PrinterProvider::GetPrinterPtr(const std::string& type)
{
   if (auto it = m_Printers.find(type); it != end(m_Printers)) {
      return m_Printers[type];
   }

   return nullptr;
}

IPrinter& PrinterProvider::GetPrinterRef(const std::string& type)
{
    // TODO: insert return statement here
   auto p = GetPrinterPtr(type);
   if (p) {
      return *p;
   }
   else {
      throw std::runtime_error{"No such printer"};
   }
}
