#include <iostream>
#include <stdlib.h>
#include <time.h>

/*This variation of RPS reduces the probability
of ending in a tie (constantly). Here's the ways to win:
Scissors cuts Paper; Paper covers Rock; Rock crushes
Lizard; Lizard poisons Spock; Spock smashes Scissors;
Scissors decapitates Lizard; Lizard eats Paper; Paper
disproves Spock; Spock vaporizes Rock; Rock crushes
Scissors*/

int main(){
  srand(time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";

  std::cout << "shoot! ";

  std::cin >> user;

  if(user == 1 && computer == 3){
    std::cout << "You win!" << "\n";
  }else if(user == 1 && computer == 4){
    std::cout << "You win!" << "\n";
  }else if(user == 2 && computer == 1){
    std::cout << "You win!" << "\n";
  }else if(user == 2 && computer == 5){
    std::cout << "You win!" << "\n";
  }else if(user == 3 && computer == 2){
    std::cout << "You win!" << "\n";
  }else if(user == 3 && computer == 4){
    std::cout << "You win!" << "\n";
  }else if(user == 4 && computer == 5){
    std::cout << "You win!" << "\n";
  }else if(user == 4 && computer == 2){
    std::cout << "You win!" << "\n";
  }else if(user == 5 && computer == 1){
    std::cout << "You win!" << "\n";
  }else if(user == 5 && computer == 3){
    std::cout << "You win!" << "\n";
  }else if(user == computer){
    std::cout << "It's a tie!" << "\n";
  }else{
    std::cout << "You lose!" << "\n";
  }
}
