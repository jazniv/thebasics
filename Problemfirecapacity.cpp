#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int maxRoomCapacity;
  int numPeople;

  cout << "Enter the maximimum room capacity: ";
  cin >> maxRoomCapacity;

  cout << "Enter the number of people in attendance: ";
  cin >> numPeople;

  if (numPeople > maxRoomCapacity) {
    cout << "There are too many people in attendance." << endl;
    cout << "This meeting cannot be held as planned due to fire regulations." << endl;
    cout << "You must remove " << (numPeople - maxRoomCapacity) << " people in order to meet the fire regulations." << endl;
  } else if (numPeople <= maxRoomCapacity) {
    cout << "It's legal to hold this meeting." << endl;
    cout << "You may include " << (maxRoomCapacity - numPeople) << " more people in attendance." << endl;
  }
  return 0;
}
