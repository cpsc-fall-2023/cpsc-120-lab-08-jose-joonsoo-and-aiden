// Jose Gonzalez
// gonzalez.jose811@csu.fullerton.edu
// @gonzalezjose811
// Partners: @BRoKeNCRu5h184, @Joonso0

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  std::string command{arguments.at(0)};
  double sum{0.0};
  int count{0};

  for (const std::string& argument : arguments) {
    if (command == argument) {
      command = "";
      continue;
    }
    try {
      double value = std::stod(argument);
      sum += value;
      count++;
    } catch (const std::invalid_argument& e) {
      std::cout << " invalid argument: " << argument << '\n';
    } catch (const std::out_of_range& e) {
      std::cout << "argument out of range:" << argument << '\n';
    }
  }
  double average = sum / count;
  std::cout << " average = " << average << '\n';

  return 0;
}