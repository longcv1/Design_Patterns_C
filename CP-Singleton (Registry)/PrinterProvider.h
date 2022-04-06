#pragma once
#include<unordered_map>
#include<string>
#include"IPrinter.h"

class PrinterProvider
{
private:
   inline static std::unordered_map<std::string, IPrinter*> m_Printers{};
   PrinterProvider() = default;

public:
   static void RegisterPrinter(const std::string& type, IPrinter* p);
   static IPrinter* GetPrinterPtr(const std::string& type);
   static IPrinter& GetPrinterRef(const std::string& type);
};

