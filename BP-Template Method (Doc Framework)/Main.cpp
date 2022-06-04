#include"TextDocument.h"
#include"NumberDocument.h"

int main()
{
   //TextDocument txt{};
   //txt.SetText("EWOJ KSFKEL JLJLDKF");
   //txt.Save();
   //txt.Load();
   //txt.Print();
   NumberDocument nb{};
   //nb.SetNumber(389439);
   //nb.SetData("New data");
   //nb.Save();
   nb.Load();
   nb.Print();
   return 0;
}