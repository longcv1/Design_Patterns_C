#pragma once
#include<string>
#include<string_view>
class Animation
{
private:
   std::string m_AnimationData{ };
public:
   Animation() = default;
   Animation(std::string_view animalFile);
   const std::string& getAnimationData() const {
      return m_AnimationData;
   }
   void setAnimationData(const std::string& animationData) {
      m_AnimationData = animationData;
   }
};

