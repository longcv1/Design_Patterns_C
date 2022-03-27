#include "Director.h"

void Director::Create(const char* pFileName, DWORD desiredAccess)
{
   m_pBuilder->SetFileName(pFileName);
   m_pBuilder->SetDesiredAccess(desiredAccess);
   m_pBuilder->SetShareMode();
   m_pBuilder->SetCreationDisposition();
   m_pBuilder->SetFlagAttributes();
   m_pBuilder->SetSecurityAttributes();
   m_pBuilder->SetTemplateFile();
}
