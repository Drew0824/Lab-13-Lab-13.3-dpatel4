#include <iostream>
using namespace std;

int main() {
  int number;
  int number2;
  int total;
  char choice;

  do
  {cout << "Enter first number:" << endl;
  cin >> number;
  cout << "Enter second number:" << endl;
  cin >> number2;
  


  total = (number * number2);

  cout << "The product is " << total << endl;
  

  cout << "Multiply more numbers? (y/n):" << endl;
  cin >> choice;

  }
   while (choice != 'N' && choice != 'n');
   cout << "Goodbye" << endl;

















}