#include"Context.h"
#include"ConCreteStrategyA.h"

int main()
{
   Context c;
   ConCreteStrategyA strategyA;
   c.SetStrategy(&strategyA);
   c.ContextInteface();
   return 0;
}