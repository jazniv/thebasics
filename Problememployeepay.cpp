#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int hoursWorked;
  int hourlyRate = 16;
  int grossPay;

  cout << "Enter the number of hours worked: ";
  cin >> hoursWorked;

  // checking for overtime hours
  if (hoursWorked > 40) {
    grossPay = (40 * hourlyRate) + ((hoursWorked - 40) * (hourlyRate * 1.5));
  } else {
    grossPay = hoursWorked * hourlyRate;
  }

  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Social Security Tax: $" << grossPay * 0.06 << endl;
  cout << "Federal Income Tax: $" << grossPay * 0.14 << endl;
  cout << "State Income Tax: $" << grossPay * 0.05 << endl;
  cout << "Medical Insurance: $10" << endl;
  cout << "Net Take-Home Pay: $" << grossPay - (grossPay * 0.06) - (grossPay * 0.14) - (grossPay * 0.05) - 10 << endl;

  return 0;
}
