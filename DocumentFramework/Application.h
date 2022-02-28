#pragma once
#include<memory>
#include"Document.h"

using DocumentPtr = std::unique_ptr<Document>;

class Application
{
public:
   void New();
   void Open();
   void Save();
private:
   DocumentPtr m_pDocument;

public:
   virtual DocumentPtr create() = 0;
};

