 
#include <iostream>

int main() {

  // Write a for loop here:
  
  for (int i = 99; i > 0; i--) {
  
    std::cout << i << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    std::cout << i - 1 << " bottles of pop on the wall.\n\n";
  
  }
  
  std::cout << "No more bottles of pop on the wall.\n";
  std::cout << "No more bottles of pop.\n";
  std::cout << "Go to the store and buy some more,\n";
  std::cout << "99 bottles of pop on the wall.\n";
  
}

////////////////////////////////////////////////////////////////////////////
title: "Wale Talk"
#include <iostream>
#include <vector>
#include <string>

int main() {
  
  //Whale, whale, whale
  //What have we got here?
  std::string input = "turpentine and turtles";
  
  std::vector<char> vowels;
  
  vowels.push_back("a");
  vowels.push_back("e");
  vowels.push_back("i");
  vowels.push_back("o");
  vowels.push_back("u");
  
  std::vector<char> whale;
  
  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]) {
        whale.push_back(input[i]);
      }
    } if (input[i] == "e" || input[i] == "u")
      whale.push_back(input[i]);
  }
}



////////////////////////////////////////////////////////////////////////////
/* 
rock paper scissors lizard spock
Need more be said for this.
Live long and prosper.
*/

#include <iostream>
#include <stdlib.h>


int main() {
  
  //Live long and prosper
  srand (time(NULL));
  
  int computer = rand() % 5 + 1;
  
  int user = 0;
  
  std::cout << "=================================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "=================================\n";

  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n";

  std::cout << "shoot! ";
  
  std::cin >> user;
  
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;
  
  if (user == rock && computer == paper) {
    std::cout << "Paper covers Rock: You lose.";
  } else if (user == rock && computer == scissors) {
    std::cout << "Rock crushes Scissors: You Win!";
  } else if (user == rock && computer == lizard) {
    std::cout << "Rock crushes Lizard: You Win!";
  } else if (user == rock && computer == spock) {
    std::cout << "Spock vaporizes Rock: You lose.";
  } else if (user == paper && computer == rock) {
    std::cout << "Paper covers Rock: You Win!";
  } else if (user == paper && computer == scissors) {
    std::cout << "Scissors cuts Paper: You lose.";
  } else if (user == paper && computer == lizard) {
    std::cout << "Lizard eats Paper: You lose.";
  } else if (user == paper && computer == spock) {
    std::cout << "Paper disproves Spock: You Win!";
  } else if (user == scissors && computer == rock) {
    std::cout << "Rock crushes Scissors: You lose.";
  } else if (user == scissors && computer == paper) {
    std::cout << "Scissors cuts Paper: You Win!";
  } else if (user == scissors && computer == lizard) {
    std::cout << "Scissors decapitates Lizard: You Win!";
  } else if (user == scissors && computer == spock) {
    std::cout << "Spock smashes Scissors: You lose.";
  } else if (user == lizard && computer == rock) {
    std::cout << "Rock crushes Lizard: You lose.";
  } else if (user == lizard && computer == paper) {
    std::cout << "Lizard eats Paper: You Win!";
  } else if (user == lizard && computer == scissors) {
    std::cout << "Scissors decapitates Lizard: You lose.";
  } else if (user == lizard && computer == spock) {
    std::cout << "Lizard poisons Spock: You Win!";
  } else if (user == spock && computer == rock) {
    std::cout << "Spock vaporizes Rock: You Win!";
  } else if (user == spock && computer == paper) {
    std::cout << "Paper disproves Spock: You lose.";
  } else if (user == spock && computer == scissors) {
    std::cout << "Spock smashes Scissors: You Win!";
  } else if (user == spock && computer == lizard) {
    std::cout << "Lizard poisons Spock: You lose.";
  } else if (user == computer) {
    std::cout << "Tie, Try Again";
  } else {
    std::cout << "??? Try Again";
  }
}
