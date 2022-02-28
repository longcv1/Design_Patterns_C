#pragma once
#include"Document.h"
#include<memory>
#include<string>

using DocumentPtr = std::unique_ptr<Document>;


class DocumentFactory
{
public:
   DocumentPtr Create(const std::string& type);
};

