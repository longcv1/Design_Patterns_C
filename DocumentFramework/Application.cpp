#include "Application.h"
#include"TextDocument.h"

void Application::New()
{
   m_pDocument = create();
}

void Application::Open()
{
   m_pDocument->read();
}

void Application::Save()
{
   m_pDocument->write();
}

