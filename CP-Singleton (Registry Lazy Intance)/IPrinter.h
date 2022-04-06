#pragma once
#include<string>
#include<memory>

class IPrinter
{
protected:
   IPrinter() = default;
public:
   IPrinter(const IPrinter&) = delete;
   IPrinter& operator = (const IPrinter&) = delete;
   virtual ~IPrinter() = default;
   virtual void Print(const std::string& data) = 0;
};

using PrinterPtr = std::shared_ptr<IPrinter>;