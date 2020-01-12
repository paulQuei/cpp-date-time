#include <chrono>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
  auto start = chrono::steady_clock::now();
  double sum = 0;
  for(int i = 0; i < 100000000; i++) {
    sum += sqrt(i);
  }
  auto end = chrono::steady_clock::now();

  auto time_diff = end - start;
  auto duration = chrono::duration_cast<chrono::milliseconds>(time_diff);
  cout << "Operation cost : " << duration.count() << "ms" << endl;

  return 0;
}