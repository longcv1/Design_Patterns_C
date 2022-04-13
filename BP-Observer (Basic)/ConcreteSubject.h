#pragma once
#include "Subject.h"
#include<string>

class ConcreteSubject :
    public Subject
{
private:
   std::string m_SubjectState{};

public:
   const std::string& GetState() const;
   void SetState(std::string state);
};

