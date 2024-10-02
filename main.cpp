#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    std::string choices[] = {"Rock", "Paper", "Scissors"};
    std::string userChoice;
    int computerChoice = std::rand() % 3;

    std::cout << "Enter Rock, Paper, or Scissors: ";
    std::cin >> userChoice;

    std::cout << "Computer chose: " << choices[computerChoice] << std::endl;

    if (userChoice == choices[computerChoice]) {
        std::cout << "It's a tie!" << std::endl;
    } else if ((userChoice == "Rock" && choices[computerChoice] == "Scissors") ||
               (userChoice == "Paper" && choices[computerChoice] == "Rock") ||
               (userChoice == "Scissors" && choices[computerChoice] == "Paper")) {
        std::cout << "You win!" << std::endl;
               } else {
                   std::cout << "You lose!" << std::endl;
               }

    return 0;
}
