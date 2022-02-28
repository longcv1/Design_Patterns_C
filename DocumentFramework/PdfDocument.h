#pragma once
#include "Document.h"
class PdfDocument :
    public Document
{
public:
   void read() override;
   void write() override;
};

