#include <iostream>
// Apperently the book I'm reading from uses cin >> instead of std::cin, oh well.

int main() {
  std::cout << "Please enter a floating-point value: \n";
  double n;
  std::cin >> n;
  std::cout << "n == " << n
            << "nn + 1 ==" << n + 1
            << "\nThree times n ==" <<3*n
            << "\nTwice n ==" << n+n
            << "\nn Squared == " << n*n
            << "\nHalf o n ==" << n/2
            << "\nHalf of n ==" << n/2
            << "\nSquare root of n == " << (n)
            // Had to also remove sqrt(n) because
            // because of another syntax error.
            ; // Had to remove << endl; because of
            // syntax error. 
}