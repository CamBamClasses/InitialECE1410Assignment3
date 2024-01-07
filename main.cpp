
#include <iostream>

#include "count.hpp"
#include "openFiles.hpp"
#include "printResults.hpp"

int main(int argc, char* argv[])
{
  try
  {
    auto io = a3::openFiles(argc, argv);
    std::array<size_t, a3::AMOUNT_OF_LETTERS> counts = a3::count(io.fin);
    a3::printResults(io.fout, counts);
  }
  catch (a3::IncorrectParameters& ex)
  {
    std::cerr << ex.what();
    return ex.getCode();
  }
  catch (a3::InvalidInputFile& ex)
  {
    std::cerr << ex.what();
    return ex.getCode();
  }
  catch (a3::InvalidOutputFile& ex)
  {
    std::cerr << ex.what();
    return ex.getCode();
  }

  return 0;
}
