#ifndef PROCESS_H
#define PROCESS_H

#include <string>
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  Process(int pid):pid_(pid){};
  int Pid();                               // TODO: See src/process.cpp
  std::string User();                      // TODO: See src/process.cpp
  std::string Command();                   // TODO: See src/process.cpp
  float CpuUtilization();                  // TODO: See src/process.cpp
  std::string Ram();                       // TODO: See src/process.cpp
  long int UpTime();                       // TODO: See src/process.cpp
  bool operator<(Process const& a) const;  // TODO: See src/process.cpp
  bool operator==(Process const& a) const;  
  long getCpuUsage() const {return cpuUsage_;};

  // TODO: Declare any necessary private members
 private:
 int pid_;
 std::string user_;
 std::string command_;
 long prevTotalProcess_; 
 long prevTotalSystem_;
 float cpuUsage_;
 long int upTime_;
 std::string ram_;
};

#endif