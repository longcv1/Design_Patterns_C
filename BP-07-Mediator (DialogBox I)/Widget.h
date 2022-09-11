#pragma once
#include <string>
#include "Command.h"

class Widget
{
<<<<<<< HEAD
   Command* m_pCommand{};
   int m_Id{};
public:
   Widget() = default;
   Widget(int id)
      : m_Id(id) {
   }
   int GetId()const {
      return m_Id;
   }
   void SetCommand(Command* pCommand) {
      m_pCommand = pCommand;
   }
   void SendMessage(const std::string& message) {
      if (m_pCommand) {
         m_pCommand->OnClick(this, message);
      }
   }
   virtual ~Widget() = default;
=======
	Command *m_pCommand{} ;
	int m_Id{} ;
public:
	Widget()=default ;
	Widget(int id)
		: m_Id(id) {
	}
	int GetId()const {
		return m_Id ;
	}
	void SetCommand(Command *pCommand) {
		m_pCommand = pCommand ;
	}
	void SendMessage(const std::string &message) {
		if(m_pCommand) {
			m_pCommand->OnClick(this, message) ;
		}
	}
	virtual ~Widget()=default ;
>>>>>>> b0031feb32a1df1951ccfe2c27dbf26ae74fc556
};

