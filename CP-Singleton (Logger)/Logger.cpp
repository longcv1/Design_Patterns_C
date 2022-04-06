#include "Logger.h"
#include<iostream>

//Logger Logger::m_Instance;
//
//Logger::Logger()
//{
//   m_pStream = fopen("log.txt", "W");
//}
//
//Logger::~Logger()
//{
//   fclose(m_pStream);
//}
//
//Logger& Logger::getInstance()
//{
//   return m_Instance;
//}

//Lazy_Logger* Lazy_Logger::m_Instance;
// Handle multi-thread issue
std::mutex Lazy_Logger::m_Mtx;

Lazy_Logger::Lazy_Logger()
{
   std::cout << __FUNCSIG__ << std::endl;
   m_pStream = fopen("log.txt", "w");
}

Lazy_Logger::~Lazy_Logger()
{
   std::cout << __FUNCSIG__ << std::endl;
   fclose(m_pStream);
}

void Lazy_Logger::WriteLog(const char* message)
{
   fprintf(m_pStream, "[%s] %s\n", m_Tag.c_str(), message);
   fflush(m_pStream);
}

void Lazy_Logger::SetTag(const char* tag)
{
   m_Tag = tag;
}

// Mayer-Singleton => It's a thread safe
//Lazy_Logger& Lazy_Logger::getInstance()
//{
//   static Lazy_Logger instance;
//   return instance;
//}

// Using std::call_once to resolve the multi-thread issue
std::once_flag flag;
Lazy_Logger& Lazy_Logger::getInstance()
{
   std::call_once(flag, [](int) {
      m_Instance.reset(new Lazy_Logger{});
      }, 5);
   return *m_Instance;
}


//Lazy_Logger& Lazy_Logger::getInstance()
//{
//   // Double Check Locking Pattern => It's not a thread safe
//   if (m_Instance == nullptr) {
//      m_Mtx.lock();
//      if (m_Instance == nullptr) {
//         //m_Instance = new Lazy_Logger{};
//         m_Instance.reset(new Lazy_Logger{});
//      }
//      m_Mtx.unlock();
//   }
//   return *m_Instance;
//}
