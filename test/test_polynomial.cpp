https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <string>
#include <iostream>

#include "polynomial.hpp"


int main(int argc, char** argv) {
  Polynomial poly = Polynomial(std::string(argv[1]));
  std::cout << poly(1.5) << std::endl;
  return 0;
}
