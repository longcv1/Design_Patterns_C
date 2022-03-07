#include "Application.h"
#include"DocumentFactory.h"

void Application::New(const std::string& type)
{
   DocumentFactory factory;
   m_pDocument = factory.Create(type);
}

void Application::Open()
{
   m_pDocument->read();
}

void Application::Save()
{
   m_pDocument->write();
}

