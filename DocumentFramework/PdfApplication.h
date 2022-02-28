#pragma once
#include "Application.h"
class PdfApplication :
    public Application
{
public:
   DocumentPtr create() override;
};

