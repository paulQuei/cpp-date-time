#include <ctime>
#include <iostream>

using namespace std;

int main() {
  time_t now = time(nullptr);
  tm* t = localtime(&now);

  cout << "Now is: " << t->tm_year + 1900 << "/" << t->tm_mon + 1<< "/" << t->tm_mday << " ";
  cout << t->tm_hour << ":" << t->tm_min << ":" << t->tm_sec << endl;

  char buffer[32];
  strftime(buffer, 32, "%Y/%m/%d %H:%M:%S", t);
  cout << "Now is: " << buffer << endl;

  return 0;
}