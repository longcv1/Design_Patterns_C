#include"Logger.h"

//void OpenConnection()
//{
//   //Logger log;
//   Logger& log = Logger::getInstance();
//   log.WriteLog("Opening connection");
//}
//
//int main()
//{
//   //Logger log;
//   Logger& log = Logger::getInstance();
//   log.SetTag("127.0.0.1");
//   log.WriteLog("Application has started");
//   OpenConnection();
//   log.WriteLog("Application is shutting down");
//   return 0;
//}

/*
   Lazy Instantiation
*/
void OpenConnection()
{
   //Logger log;
   Lazy_Logger& log = Lazy_Logger::getInstance();
   log.WriteLog("Opening connection");
}

int main()
{
   //Logger log;
   Lazy_Logger& log = Lazy_Logger::getInstance();
   log.SetTag("127.0.0.1");
   log.WriteLog("Application has started");
   OpenConnection();
   log.WriteLog("Application is shutting down");
   return 0;
}
