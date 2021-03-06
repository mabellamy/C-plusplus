title: "FizzBuzz"
#include <iostream>

int main() {
  
  //Let the fun begin:
  for (int i=1; i<=100; i++) {
    if (i % 15 == 0) {
      std::cout << "FizzBuzz\n";
    } else if (i % 5 == 0) {
      std::cout << "Buzz\n";
    } else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    } else {
      std::cout << i << "\n";
    }
  }
}


////////////////////////////////////////////////////////////////////////////
title:"Boolean Function"
#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent) {
  if (days > 3 && is_succulent == false) {
    return "Time to water the plant.";
  } else if (days < 13 && is_succulent == true) {
    return "Don't water the plant!";
  } else if (days >= 13 && is_succulent == true) {
    return "Go ahead and give the plant a little water.";
  } else {
    return "Don't water the plant!";
  }
}

int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}


////////////////////////////////////////////////////////////////////////////
title: "Palindrome Function"
#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  std::string reverse = "";
  for (int i = text.size() - 1; i >= 0; i--) {
    reverse += text[i];
  }
  if (reverse == text) {
    return true;
  }
  else {
    return false;
  }
}


int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}


////////////////////////////////////////////////////////////////////////////
title: "Quadratic Solver"
#include <iostream>
#include <cmath>

int main() {
  
  double a, b, c;
  
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;
  
  double root1, root2;
  
  root1 = (-b + std::sqrt(b*b - 4*a*c))/(2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c))/(2*a);
  
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
  
 
}


////////////////////////////////////////////////////////////////////////////
title" "Power Function"
#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
  
  return pow(num,10);
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
  }
  
  
  ////////////////////////////////////////////////////////////////////////////
  title: "Vector Loop"
  #include <iostream>
#include <vector>

int main() {
  
  std::vector<int> numbers = {2,5,4,8,10,11,15,13,27};
  
  for (int i = 0; i < numbers.size(); i++)
  {
    int sum = 0;
    int product = 1;
    if (i % 2 == 0)
    {
      sum = sum + i;
    }
    else if (i % 2 == 1) {
      product = product * i;
    }
  }
  
  std::cout << "Sum of even numbers is: " << sum << "\n.";
  std::cout << "Product of odd numbers is: " << product << "\n";
}



