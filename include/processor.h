#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <string>
#include "linux_parser.h"

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
 private:
 long prevActive_{0};
 long prevIdle_{0};
};

#endif