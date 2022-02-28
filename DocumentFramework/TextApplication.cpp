#include "TextApplication.h"
#include"TextDocument.h"
#include<iostream>

DocumentPtr TextApplication::create()
{
   std::cout << "Create Text Application\n";
   return std::make_unique<TextDocument>();
}
