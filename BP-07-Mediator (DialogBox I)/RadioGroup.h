#pragma once
#include "Widget.h"
class RadioGroup :
<<<<<<< HEAD
   public Widget
{
   const char* m_Titles[3]{ "Mr. ", "Mrs. ", "Ms. " };
   size_t m_Selection{ 0 };
public:
   void SetSelection(size_t index);
   const char* GetSelection()const;
=======
    public Widget
{
	const char *m_Titles[3]{"Mr. ", "Mrs. ", "Ms. "} ;
	size_t m_Selection{0} ;
public:
	void SetSelection(size_t index) ;
	const char *GetSelection()const ;
>>>>>>> b0031feb32a1df1951ccfe2c27dbf26ae74fc556
};

