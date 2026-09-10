#include <iostream>
#include <vector>

struct Player {
  double skill;
  double elo;
};

int main() {
  std::vector<Player> players = {
      {1700.0, 1500.0},
      {1500.0, 1500.0},
      {1800.0, 1500.0},
  };
  std::cout << "Hello, World!" << std::endl;
  return 0;
}