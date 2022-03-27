#include "SimpleFileBuilder.h"

void SimpleFileBuilder::SetFileName(const char* pFile)
{
   m_pFileName = pFile;
}

void SimpleFileBuilder::SetDesiredAccess(DWORD access)
{
   m_DesiredAccess = access;
}

File SimpleFileBuilder::Build()
{
   return File{m_pFileName, m_DesiredAccess, 0, nullptr,
               CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr};
}
