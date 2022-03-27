#pragma once
#include "FileBuilder.h"
class EncryptedFileBuilder :
    public FileBuilder
{
private:
   const char* m_pFileName{};
   DWORD m_DesiredAccess{};
   DWORD m_ShareMode{};
   DWORD m_FlagAttributes{};

public:
   void SetFileName(const char* pFile)override;
   void SetDesiredAccess(DWORD access) override;
   void SetShareMode() override;
   void SetSecurityAttributes() override {};
   void SetCreationDisposition() override {};
   void SetFlagAttributes() override;
   void SetTemplateFile() override {};
   File Build() override;
};

