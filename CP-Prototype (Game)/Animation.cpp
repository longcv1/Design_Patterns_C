#include "Animation.h"

#include<iostream>
#include<thread>

Animation::Animation(std::string_view animalFile)
{
   using namespace std;
   cout << "[Animation] Loading....." << animalFile << " ";
   for (int i = 0; i < 10; i++) {
      cout << '.';
      std::this_thread::sleep_for(200ms);
   }
   cout << "\n";

   m_AnimationData.assign("^^^^^^^");
}
