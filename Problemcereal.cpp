#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int cerealWeight;
  double metricTon = 35273.92;
  double metricWeight;
  int numBoxes;

  cout << "Enter the weight of the cereal in ounces:" << endl;
  cin >> cerealWeight;

  // calculates weight in metric tons
  metricWeight = cerealWeight / metricTon;
  cout << "Cereal's Weight in Metric Tons: " << metricWeight << endl;

  // calculates number of boxes needed for one metric ton
  numBoxes = metricTon / metricWeight;
  cout << "Number of Boxes Needed for One Metric Ton: " << numBoxes << endl;

  return 0;
}
