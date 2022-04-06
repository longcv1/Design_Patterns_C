#include"Logger.h"
#include<thread>
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

int main_lazy_instantiation()
{
   //Logger log;
   Lazy_Logger& log = Lazy_Logger::getInstance();
   log.SetTag("127.0.0.1");
   log.WriteLog("Application has started");
   OpenConnection();
   log.WriteLog("Application is shutting down");
   return 0;
}

// Multi-thread
int main()
{
   std::thread t1{ []() {
      Lazy_Logger& log = Lazy_Logger::getInstance();
      log.SetTag("127.0.0.1");
      log.WriteLog("Thread 1 has started");
   } };

   std::thread t2{ []() {
      Lazy_Logger& log = Lazy_Logger::getInstance();
      log.SetTag("127.0.0.1");
      log.WriteLog("Thread 2 has started");
   } };

   t1.join(); t2.join();
   return 0;
}