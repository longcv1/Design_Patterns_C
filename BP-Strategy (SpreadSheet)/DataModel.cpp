#include "DataModel.h"
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

void DataModel::AddRow(std::vector<int> data)
{
   m_Sheet.push_back(std::move(data));
}

void DataModel::Display()
{
   for (auto row : m_Sheet) {
      for (auto e : row) {
         std::cout << e << '\t';
      }
      std::cout << '\n';
   }
}

void DataModel::Load()
{
   m_Sheet.clear();
   std::ifstream input{ "data.sheet.txt" };
   if (!input) {
      std::cout << "Could not open the file to read\n";
      return;
   }
   std::string line;
   while (std::getline(input, line)) {
      std::vector<int> row{};
      int e{};
      std::istringstream istr{ line };
      while (istr >> e) {
         row.push_back(e);
      }
      AddRow(std::move(row));
   }
}

void DataModel::Save()
{
   std::ofstream out{"data.sheet.txt"};
   if (!out) {
      std::cout << "Could not open the file to write\n";
      return;
   }
   for (auto row : m_Sheet) {
      for (auto e : row) {
         out << e << '\t';
      }
      out << '\n';
   }
}

void DataModel::Export()
{
   std::ofstream out{ "data.csv" };
   for (auto row : m_Sheet) {
      for (auto e : row) {
         out << e << ',';
      }
      out << '\n';
   }
}
