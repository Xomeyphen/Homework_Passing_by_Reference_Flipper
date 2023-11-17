/*
Programmer’s name : N/A
Programmer : N/A

Date : 11 / 17 / 2023

Version : 1.2

Des : A program that takes user input for 2 different numbers then flpis with each function but only one
  using refernce will change the orgional verable.

*/

#include <iostream>

void somefun(int, int);
void somefun2(int&, int&);

int main() {
  int n1, n2;


  std::cout << "Please enter two (2) numbers seperatly\n";

  std::cin >> n1;
  std::cin >> n2;

  while (std::cin.fail()) {// fail check
    std::cin.clear();
    std::cin.ignore();
    std::cout << "Please enter a real number\n";
    std::cin >> n1;
    std::cin >> n2;
    continue;
  }

  somefun(n1, n2);//no ref
  std::cout << "In Main Number 1 is: " << n1 << std::endl;
  std::cout << "In Main Number 2 is: " << n2 << std::endl;

  somefun2(n1, n2);//ref
  std::cout << "In Main Number 1 is: " << n1 << std::endl;
  std::cout << "In Main Number 2 is: " << n2 << std::endl;

  return 0;
}

void somefun(int num1, int num2) {// switcher no ref
  int temp = 0;

  temp = num1;
  num1 = num2;
  num2 = temp;

  std::cout << "Function 1 Number 1 is: " << num1 << std::endl;
  std::cout << "Function 1 Number 2 is: " << num2 << std::endl;
}

void somefun2(int &num1, int &num2) {// switcher with ref
  int temp = 0;

  temp = num1;
  num1 = num2;
  num2 = temp;

  std::cout << "Function 2 Number 1 is: " << num1 << std::endl;
  std::cout << "Function 2 Number 2 is: " << num2 << std::endl;
}