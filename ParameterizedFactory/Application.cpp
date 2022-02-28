#include "Application.h"
#include"DocumentFactory.h"

void Application::New()
{
   DocumentFactory factory;
   m_pDocument = factory.Create("pdf");
}

void Application::Open()
{
   m_pDocument->read();
}

void Application::Save()
{
   m_pDocument->write();
}

