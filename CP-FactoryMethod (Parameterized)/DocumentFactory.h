#pragma once
#include<memory>
#include<string>
#include"Document.h"
#include"TextDocument.h"
#include"PdfDocument.h"

using DocumentPtr = std::unique_ptr<Document>;


class DocumentFactory
{
public:
   DocumentPtr Create(const std::string& type);
};


DocumentPtr DocumentFactory::Create(const std::string& type)
{
   if (type == "text") {
      return std::make_unique<TextDocument>();
   }
   else if (type == "pdf") {
      return std::make_unique<PdfDocument>();
   }
   return DocumentPtr();
}