#include <cmath>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  time_t time1 = time(nullptr);
  double sum = 0;
  for(int i = 0; i < 1000000000; i++) {
    sum += sqrt(i);
  }
  time_t time2 = time(nullptr);

  double time_diff = difftime(time2, time1);
  cout << "time1: " << time1 << endl;
  cout << "time2: " << time2 << endl;
  cout << "time_diff: " << time_diff << "s" << endl;

  return 0;
}