#pragma once
#include "Document.h"
class TextDocument :
    public Document
{
public:
   void read() override;
   void write() override;
};

