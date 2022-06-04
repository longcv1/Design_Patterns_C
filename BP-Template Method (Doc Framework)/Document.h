#pragma once
#include<fstream>


// NOT USING TEMPLATE METHOD

//class Document
//{
//protected:
//   std::fstream m_Stream{};
//   bool m_isModified{ false };
//
//public:
//   virtual void Save() = 0;
//   virtual void Load() = 0;
//   virtual ~Document() = default;
//};

/*
   SAVE ALGORITHMS:
   1. check if already saved
   2. Display dialog and get the filename
   3. Open the filestream for writing
   4. Write version information (optional)
   5. Write the data (optional)
   6. Set modified state to false
*/

/*
   LOAD ALGORITHMS:
   1. Check if modified
   2. Display the dialog and get the filename
   3. Open the filestream for reading
   4. Read version information (optional)
   5. Read the data (optional)
*/

class Document {
private:
   enum class DialogType
   {
      SAVE,
      LOAD
   };
   bool m_IsModified{false};
   std::string FileDialog(DialogType type) const;

protected:
   virtual void WriteVersion(std::ofstream &out);
   virtual void ReadVersion(std::ifstream& in);

   virtual void WriteData(std::ofstream &out) = 0;
   virtual void ReadData(std::ifstream& in) = 0;

public:
   void SetModified(bool isModified) {
      m_IsModified = isModified;
   }
   void Save();
   void Load();
   virtual ~Document() = default;
};

