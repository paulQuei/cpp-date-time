#include <ctime>
#include <iostream>

using namespace std;

int main() {
  time_t now = time(nullptr);
  cout << "Now is: " << ctime(&now);

  return 0;
}