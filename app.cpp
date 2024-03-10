#include <iostream>
using namespace std;

int main()
{
 // Simple Calculator App

  int num_one, num_two, op;

  cout << "Type Number One\n";
  cin >> num_one;
  cout << "Type Number Two\n";
  cin >> num_two;
  cout << "Choose Operation Number\n";
  cout << "[1] +\n";
  cout << "[2] -\n";
  cout << "[3] /\n";
  cout << "[4] *\n";
  cin >> op;

  if (op == 1)
  {
    cout << num_one + num_two << "\n";
  }
  else if (op == 2)
  {
    cout << num_one - num_two << "\n";
  }
  else if (op == 3)
  {
    cout << num_one / num_two << "\n";
  }
  else if (op == 4)
  {
    cout << num_one * num_two << "\n";
  }
  else
  {
    cout << "Operation Is Not Valid\n";
  }
    return 0;
}