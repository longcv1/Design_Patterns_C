#include<iostream>
#include"File.h"
#include"SimpleFileBuilder.h"
#include"EncryptedFileBuilder.h"
#include"Director.h"

void READ_FILE()
{
   File f{ "data.txt", GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr };
   if (!f.IsOpen()) {
      std::cout << "Could not open the file\n";
      return;
   }
   constexpr int SIZE{ 128 };
   char buffer[SIZE]{};
   while (f.Read(buffer, SIZE) != 0) {
      std::cout << buffer;
   }
}

void WRITE_FILE()
{
   File f{ "data.txt", GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr };
   if (!f.IsOpen()) {
      std::cout << "Could not open the file\n";
      return;
   }
   auto str = "HELLO WORLD!";
   f.Write(str, strlen(str));
}
int main()
{
   /*WRITE_FILE();
   READ_FILE();*/
   EncryptedFileBuilder builder{};
   Director dir{ &builder };
   dir.Create("myFile.txt", FILE_GENERIC_WRITE);
   File file = builder.Build();
   auto str = "HEELLLLLLOOOOOOO";
   file.Write(str, strlen(str));
   return 0;
}