#include <iostream>
#include <cstdlib> //acess the random function
#include <time.h> //included this for line 10

int main(){
  //Your future is here
  std::cout << "MAGIC 8 BALL: " << "\n";

  int answer = std::rand() % 10;
  srand(time(NULL)); //helps generate random number

  if(answer == 0){
    std::cout << "It is certain." << "\n";
  }else if(answer == 1){
    std::cout << "My answer is yes." << "\n";
  }else if(answer == 2){
    std::cout << "Hmmm..." << "\n";
  }else if(answer == 3){
    std::cout << "I guess." << "\n";
  }else if(answer == 4){
    std::cout << "No!" << "\n";
  }else if(answer == 5){
    std::cout << "Absolutely!" << "\n";
  }else if(answer == 6){
    std::cout << "Absolutely not!" << "\n";
  }else if(answer == 7){
    std::cout << "Sure!" << "\n";
  }else if(answer == 8){
    std::cout << "Have you lost your mind?" << "\n";
  }else{
    std::cout << "Very doubtful." << "\n";
  }
  return 0;
}
