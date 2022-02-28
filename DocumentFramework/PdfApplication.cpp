#include "PdfApplication.h"
#include"PdfDocument.h"
#include<iostream>

DocumentPtr PdfApplication::create()
{
   std::cout << "Create Pdf Application\n";
   return std::make_unique<PdfDocument>();
}
