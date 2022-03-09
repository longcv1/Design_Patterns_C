#pragma once
#include<string>

class IConnection;
class IRecordSet;
class ICommand
{
private:
   std::string m_CommandString;
protected:
   IConnection* m_pConnection{};
public:
   IConnection* GetConnection() const {
      return m_pConnection;
   }
   const std::string& GetCommand() const {
      return m_CommandString;
   }
   void SetCommand(const std::string& comm) {
      m_CommandString = comm;
   }
   void SetConnection(IConnection* pConn) {
      m_pConnection = pConn;
   }

   virtual void executeCommand() = 0;
   virtual IRecordSet* executeQuery() = 0;
   virtual ~ICommand() = default;
};
