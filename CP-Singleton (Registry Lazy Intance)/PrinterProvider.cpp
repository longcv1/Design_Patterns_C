#include "PrinterProvider.h"
#include<iostream>

std::mutex PrinterProvider::m_Mtx;

void PrinterProvider::RegisterCreator(const std::string& type, Creator creator)
{
   std::lock_guard lock(m_Mtx);
   if (auto it = m_Printers.find(type); it == end(m_Printers)) {
      m_Printers[type].m_Creator = creator;
   }
   else {
      std::cout << "Already Registered\n";
   }
}

PrinterPtr PrinterProvider::GetPrinter(const std::string& type)
{
   std::lock_guard lock(m_Mtx);
   if (auto it = m_Printers.find(type); it != end(m_Printers)) {
      if (!m_Printers[type].m_Printer) {
         m_Printers[type].m_Printer = m_Printers[type].m_Creator();
      }
      return m_Printers[type].m_Printer;
   }
   std::cout << "Unknow type\n";
   return nullptr;
}
