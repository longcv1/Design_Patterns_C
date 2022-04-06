#include"PrinterProvider.h"
#include"LocalPrinter.h"

void PrintSales()
{
   auto p = PrinterProvider::GetPrinter("local");
   if (p) {
      p->Print("Report Sales Data:\n");
   }
}

int main()
{
   PrinterProvider::RegisterCreator("local", &LocalPrinter::GetInstance);
   auto p = PrinterProvider::GetPrinter("local");
   if (p) {
      p->Print("Printing Data......\n");
   }
   PrintSales();
   return 0;
}