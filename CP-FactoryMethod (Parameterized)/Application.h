#pragma once
#include<memory>
#include<string>
#include"Document.h"

using DocumentPtr = std::unique_ptr<Document>;

class Application
{
public:
   void New(const std::string& type);
   void Open();
   void Save();
private:
   DocumentPtr m_pDocument;
};

