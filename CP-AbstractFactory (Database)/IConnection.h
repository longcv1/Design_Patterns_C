#pragma once
#include<string>

class IConnection 
{
private:
   std::string m_ConnectionString;

public:
   void SetConnectionString(const std::string& conn) {
      m_ConnectionString = conn;
   }
   const std::string& GetConnectionString() const {
      return m_ConnectionString;
   }

   virtual void open() = 0;
   virtual ~IConnection() = default;
};

