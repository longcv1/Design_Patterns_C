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

Lazy_Logger& Lazy_Logger::getInstance()
{
   if (m_Instance == nullptr) {
      //m_Instance = new Lazy_Logger{};
      m_Instance.reset(new Lazy_Logger{});
   }
   return *m_Instance;
}
