#pragma once
#include <string>
class Widget;

class Command
{
public:
<<<<<<< HEAD
   virtual void OnClick(Widget* pWidget, const std::string& message) = 0;
   virtual ~Command() = default;
=======
	virtual void OnClick(Widget *pWidget, const std::string &message) = 0 ;
	virtual ~Command()=default ;
>>>>>>> b0031feb32a1df1951ccfe2c27dbf26ae74fc556
};

