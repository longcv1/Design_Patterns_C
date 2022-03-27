#pragma once
#include<string>
#include<iostream>

class Product {
private:
   std::string m_Name;
   std::string m_Body;
   std::string m_Engine;

public:
   Product() = default;
   Product(std::string& name, std::string& body, std::string engine) {
      m_Name = name;
      m_Body = body;
      m_Engine = engine;
   }
   ~Product() = default;
   void Show() {
      std::cout << "Product: " << m_Name << " - " << m_Body << " - " << m_Engine << std::endl;
   };
};
