#ifndef PRINT_RESULTS_HPP
#define PRINT_RESULTS_HPP

#include <string>

#include "count.hpp"

namespace a3
{
  void printResults(std::ofstream& fout,
                    std::array<size_t, a3::AMOUNT_OF_LETTERS> toPrint);
}

#endif
