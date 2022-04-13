#pragma once

class IObserver {
public:
   virtual void Update() = 0;
   virtual ~IObserver() = default;
};
