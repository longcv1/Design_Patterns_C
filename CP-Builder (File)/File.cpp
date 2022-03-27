#include "File.h"
#include <stdexcept>

File::File(const char* fileName, DWORD desiredAccess, DWORD shareMode, LPSECURITY_ATTRIBUTES sa, DWORD creationDispo, DWORD flagAttibutes, HANDLE templateFile)
{
   m_hFile = CreateFileA(fileName, desiredAccess, shareMode, sa, creationDispo, flagAttibutes, templateFile);
   if (m_hFile == INVALID_HANDLE_VALUE) {
      throw std::runtime_error{ "File Error!" };
   }
}

DWORD File::Read(char* pBuffer, DWORD size)
{
   DWORD read{};
   ZeroMemory(pBuffer, size);
   if (ReadFile(m_hFile, pBuffer, size-1, &read, nullptr) == FALSE) {
      throw std::runtime_error{ "Error while reading!" };
   }
   return read;
}

DWORD File::Write(const char* pBuffer, DWORD size)
{
   DWORD written{};
   if (WriteFile(m_hFile, pBuffer, size, &written, nullptr) == FALSE) {
      throw std::runtime_error{ "Error while writing!" };
   }
   return written;
}

void File::Close()
{
   CloseHandle(m_hFile);
   m_hFile = nullptr;
}

File::~File()
{
   if (m_hFile) {
      Close();
   }
}

BOOL File::IsOpen() const
{
   return m_hFile != nullptr;
}
