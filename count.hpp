#ifndef COUNT_HPP
#define COUNT_HPP

#include <array>
#include <fstream>

namespace a3
{
  const size_t AMOUNT_OF_LETTERS = 52;
  std::array<size_t, AMOUNT_OF_LETTERS> count(std::ifstream& fin);
}

#endif
