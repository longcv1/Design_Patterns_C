#include"DataModel.h"
#include"CSVFormat.h"
#include"HtmlFormat.h"

int main()
{
   DataModel data{};
   //data.AddRow({ 1,2,3,4,5,6 });
   //data.AddRow({ 3,4,5,6,7,8 });
   //data.Display();
   //data.Save();
   data.Load();
   data.Display();
   CSVFormat csv{ "records.csv" };
   HtmlFormat html{ "records.html" };
   data.SetFormat(&html);
   data.Export();
   return 0;
}