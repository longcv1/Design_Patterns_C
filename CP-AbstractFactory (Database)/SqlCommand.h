#pragma once
#include "ICommand.h"
class SqlCommand :
    public ICommand
{
public:
   void executeCommand() override;
   IRecordSet* executeQuery() override;
};

