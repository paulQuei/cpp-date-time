#include <chrono>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    auto now = chrono::system_clock::now();
    time_t time = chrono::system_clock::to_time_t(now);
    cout << "Now is: " << ctime(&time) << endl;
}