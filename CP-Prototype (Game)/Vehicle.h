#pragma once
#include<string>
#include<iostream>

class Animation;
struct Position {
   int x{};
   int y{};
   friend std::ostream& operator << (std::ostream& out, Position p) {
      return out << '(' << p.x << ',' << p.y << ')';
   }
};
class Vehicle
{
   int m_speed{};
   int m_hitPoints{};
   std::string m_name{};
   Animation* m_pAnimation{};
   Position m_postion{};
public:
   Vehicle() = default;
   Vehicle(int speed, int hitPoints, const std::string name, Position& pos)
      : m_speed{ speed }, m_hitPoints{ hitPoints }, m_name{ name }, m_postion{ pos }{}
   virtual ~Vehicle();
   int getSpeed() const { return m_speed; }
   Position getPostion() const { return m_postion; }
   const std::string& getName() const { return m_name; }
   int getHitPoints() const { return m_hitPoints; }
   void setSpeed(int speed) { m_speed = speed; }
   void setPosition(Position pos) { m_postion = pos; }
   void setName(std::string& name) { m_name = name; }
   void setHitPoints(int hitPoints) { m_hitPoints = hitPoints; }
   void setAnimationData(const std::string& animationData);
   virtual void Update() = 0;
};

