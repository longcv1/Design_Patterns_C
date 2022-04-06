#pragma once
#include<string>

class IPrinter
{
protected:
   IPrinter() = default;
public:
   IPrinter(const IPrinter&) = delete;
   IPrinter& operator = (const IPrinter&) = delete;
   virtual ~IPrinter() = default;
   virtual void Print(const std::string& data) = 0;
   static IPrinter& GetInstance(const std::string& type);
};

