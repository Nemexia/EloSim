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

  for (auto const& player : players) {
    std::cout << "Player skill: " << player.skill
              << ", Player elo: " << player.elo << std::endl;
  }
  return 0;
}