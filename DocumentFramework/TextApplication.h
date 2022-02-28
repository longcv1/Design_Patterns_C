#pragma once
#include "Application.h"
class TextApplication :
    public Application
{
public:
   DocumentPtr create() override;
};

