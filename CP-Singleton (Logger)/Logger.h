#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include<string>
#include<memory>

//class Logger
//{
//private:
//   FILE* m_pStream;
//   std::string m_Tag;
//
//private:
//   Logger();
//   static Logger m_Instance;
//public:
//   ~Logger();
//   Logger(const Logger&) = delete;
//   Logger& operator = (const Logger&) = delete;
//   void WriteLog(const char* message);
//   void SetTag(const char* tag);
//   static Logger& getInstance();
//};

class Lazy_Logger {
private:
   FILE* m_pStream;
   std::string m_Tag;

private:
   Lazy_Logger();
   //static Lazy_Logger* m_Instance;
   inline static std::unique_ptr<Lazy_Logger> m_Instance{};
public:
   ~Lazy_Logger();
   Lazy_Logger(const Lazy_Logger&) = delete;
   Lazy_Logger& operator = (const Lazy_Logger&) = delete;
   void WriteLog(const char* message);
   void SetTag(const char* tag);
   static Lazy_Logger& getInstance();
};

