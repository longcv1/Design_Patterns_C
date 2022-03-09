#pragma once
#include "ICommand.h"
class MongoCommand :
    public ICommand
{
public:
   void executeCommand() override;
   IRecordSet* executeQuery() override;
};

