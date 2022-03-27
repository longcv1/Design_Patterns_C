#pragma once
#include"FileBuilder.h"

class Director
{
private:
   FileBuilder* m_pBuilder;
public:
   Director(FileBuilder* builder) :m_pBuilder{ builder } {};
   void Create(const char* pFileName, DWORD desiredAccess);
};

