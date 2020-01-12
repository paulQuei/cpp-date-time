#include <ctime>
#include <iostream>

using namespace std;

int main() {
  time_t now = time(nullptr);

  tm* gm_time = gmtime(&now);
  tm* local_time = localtime(&now);

  cout << "gmtime: " << asctime(gm_time);
  cout << "local_time: " << asctime(local_time);

  return 0;
}