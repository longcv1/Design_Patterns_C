#include "DocumentFactory.h"
#include"TextDocument.h"
#include"PdfDocument.h"

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
