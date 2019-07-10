#include "hello-greet.h"
#include "Test.hh"
#include <ctime>
#include <iostream>
#include <string>

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  wrap_print_output(get_greet(who));
  print_localtime();
  return 0;
}
