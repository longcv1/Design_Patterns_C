#pragma once
#include<unordered_map>
#include<string>
#include<functional>
#include<mutex>
#include"IPrinter.h"

using Creator = std::function<PrinterPtr()>;

class PrinterProvider
{
private:
   struct InstanceInfo {
      PrinterPtr m_Printer{};
      Creator m_Creator{};
   };

private:
   static std::mutex m_Mtx;
   inline static std::unordered_map<std::string, InstanceInfo> m_Printers{};
   PrinterProvider() = default;

public:
   static void RegisterCreator(const std::string& type, Creator creator);
   static PrinterPtr GetPrinter(const std::string& type);
};

