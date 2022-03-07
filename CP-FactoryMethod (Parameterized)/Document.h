#pragma once

class Document {
public:
   virtual void read() = 0;
   virtual void write() = 0;
   virtual ~Document() {};
};