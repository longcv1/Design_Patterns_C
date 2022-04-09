#pragma once
class IStrategy {
public:
   virtual void AlgorithmInterface() = 0;
   virtual ~IStrategy() = default;
};