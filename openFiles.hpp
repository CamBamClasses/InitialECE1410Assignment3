#ifndef OPEN_FILES_HPP
#define OPEN_FILES_HPP

#include <fstream>

namespace a3
{
  class IncorrectParameters : public std::runtime_error
  {
  public:
    IncorrectParameters() : std::runtime_error("Invalid input parameters"){};
    int getCode() { return 1; }
  };

  class InvalidInputFile : public std::runtime_error
  {
  public:
    InvalidInputFile() : std::runtime_error("Invalid input file"){};
    int getCode() { return 2; }
  };

  class InvalidOutputFile : public std::runtime_error
  {
  public:
    InvalidOutputFile() : std::runtime_error("Invalid output file"){};
    int getCode() { return 3; }
  };

  struct InputOutput
  {
    InputOutput(std::ifstream& in, std::ofstream& out)
      : fin(std::move(in)), fout(std::move(out))
    {
    }

    std::ifstream fin;
    std::ofstream fout;
  };

  InputOutput openFiles(int argc, char* argv[]);
} // namespace a3

#endif
