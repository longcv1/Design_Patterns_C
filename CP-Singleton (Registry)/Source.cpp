#include"PrinterProvider.h"

void PrintSales()
{
   auto p = PrinterProvider::GetPrinterPtr("local");
   if (p) {
      p->Print("Report Sales Data\n");
   }
}


int main()
{
   auto p = PrinterProvider::GetPrinterPtr("local");
   if (p) {
      p->Print("Printing data....\n");
   }
   PrintSales();
   return 0;
}