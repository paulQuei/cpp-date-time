#include <ctime>
#include <iostream>

using namespace std;

int main() {
  time_t epoch_time = time(nullptr);
  cout << "Epoch time: " << epoch_time << endl;

  return 0;
}