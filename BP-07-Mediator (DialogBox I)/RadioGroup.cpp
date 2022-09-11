#include "RadioGroup.h"

void RadioGroup::SetSelection(size_t index) {
<<<<<<< HEAD
   m_Selection = index;
   SendMessage("RadioGroup::SetSelection");
}

const char* RadioGroup::GetSelection() const {
   return m_Titles[m_Selection];
=======
	m_Selection = index ;
	SendMessage("RadioGroup::SetSelection") ;
}

const char* RadioGroup::GetSelection() const {
	return m_Titles[m_Selection] ;
>>>>>>> b0031feb32a1df1951ccfe2c27dbf26ae74fc556
}
