#pragma once
#include<Windows.h>

class File
{
   const char* m_pFileName{};
   DWORD m_DesiredAccess{};
   DWORD m_ShareMode{};
   LPSECURITY_ATTRIBUTES m_pSA{};
   DWORD m_CreationDisposition{};
   DWORD m_FlagAttributes{};
   HANDLE m_hTemplateFile{};
   HANDLE m_hFile{};

public:
   File(const char* fileName,
      DWORD desiredAccess,
      DWORD shareMode,
      LPSECURITY_ATTRIBUTES sa,
      DWORD creationDispo,
      DWORD flagAttibutes,
      HANDLE templateFile);

   DWORD Read(char* pBuffer, DWORD size);
   DWORD Write(const char* pBuffer, DWORD size);
   void Close();
   ~File();
   BOOL IsOpen() const;
};

