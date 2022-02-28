#include"Application.h"
#include"TextApplication.h"
#include"PdfApplication.h"
int main()
{
   Application* app = new TextApplication();
   app->New();
   app->Open();
   app->Save();

   Application* pdfApp = new PdfApplication();
   pdfApp->New();
   pdfApp->Open();
   pdfApp->Save();
}
