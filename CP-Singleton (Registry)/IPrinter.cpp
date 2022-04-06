#include "IPrinter.h"
#include"LocalPrinter.h"

IPrinter& IPrinter::GetInstance(const std::string& type)
{
    // TODO: insert return statement here
   if (type == "local") {
      return LocalPrinter::GetInstance();
   }
}
