#include <iostream>

#define DEBUG 0

double getTowerHeight() {
  double towerHeight{};
  std::cout << "Enter the height of the tower in meters: ";
  std::cin >> towerHeight;
  return towerHeight;
}

void printResult(double towerHeight) {
  std::cout << "The tower is " << towerHeight << " meters tall.\n";
}

#if DEBUG 
double calculateDistance(double towerHeight) {
}
#endif

int main() {
  
  const double towerHeight{getTowerHeight()};
  printResult(towerHeight);
  return 0;
}