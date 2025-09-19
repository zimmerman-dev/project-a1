#include <iostream>

const double kGravity{9.8};
const int kAcceleration{2};

double getTowerHeight() {
  double towerHeight{};
  std::cout << "Enter the height of the tower in meters: ";
  std::cin >> towerHeight;
  return towerHeight;
}

int timeSpan() {
  std::cout << "Enter the your time span in seconds: ";
  int seconds{};
  std::cin >> seconds;
  return seconds;
}

double gravityFormula(double towerHeight, int seconds) {
  double currentHeight{towerHeight -
                        (kGravity * (seconds * seconds) / kAcceleration)};
  return currentHeight;
}

int main() {
  
  const double kTowerHeight{getTowerHeight()};
  const int kTimeSpan{timeSpan()};


  for (size_t i = 0; i < kTimeSpan; ++i) {
    double distanceFallen{gravityFormula(kTowerHeight, i)};
    std::cout << "At " << i << " seconds, the ball is at " << distanceFallen << " meters.\n";
  }
  return 0;
}