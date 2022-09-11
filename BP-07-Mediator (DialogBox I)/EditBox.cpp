#include "EditBox.h"
#include "ListBox.h"

void EditBox::SetListBox(ListBox* pListBox) {
<<<<<<< HEAD
   m_pListBox = pListBox;
}

void EditBox::OnClick(Widget* pWidget, const std::string& message) {
   m_Text = m_pListBox->GetSelectedItem();
}

void EditBox::SetText(std::string text) {
   m_Text = std::move(text);
}

const std::string& EditBox::GetText() const {
   return m_Text;
=======
	m_pListBox = pListBox ;
}

void EditBox::OnClick(Widget* pWidget, const std::string& message) {
	m_Text = m_pListBox->GetSelectedItem() ;
}

void EditBox::SetText(std::string text) {
	m_Text = std::move(text) ;
}

const std::string& EditBox::GetText() const {
	return m_Text ;
>>>>>>> b0031feb32a1df1951ccfe2c27dbf26ae74fc556
}
