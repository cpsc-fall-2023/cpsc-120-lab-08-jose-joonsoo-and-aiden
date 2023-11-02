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
      }
  
     try {
        double value = std::stod(argument);
        // converts string to double value using stod
        sum += value;
 
    std::string command }
    std::string command{arguments.at(0)};
    double sum{0.0};
    int count{0};
  
    for (const std::string& argument : arguments) {
      if (command == argument) {
        command = "";
      }
  
      try {

      double value = std::stod(argument);
      // converts string to double value using stod
      sum += value;
      count++;
    } catch (const std::invalid_argument& e) {
      // cannot be converted to a valid double
      std::cout << " invalid argument: " << argument << '\n';
    } catch (const std::out_of_range& e) {
      // argument is too large
      std::cout << "argument out of range:" << argument << '\n';
    }
  }

  double average = sum / count;
  // average is equal to the sum of all the values, divided by the number of
  // values
  std::cout << "average = " << average << '\n';

  return 0;
}
