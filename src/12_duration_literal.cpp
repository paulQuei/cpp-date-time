#include <chrono>
#include <iostream>

using namespace std;

int main()
{
    using namespace std::chrono_literals;
    auto two_hours = 2h;
    auto five_minutes = 5min;

    auto duration = two_hours + five_minutes;
    auto seconds = chrono::duration_cast<chrono::seconds>(duration);
    cout << "02:05 is " << seconds.count() << " seconds" << endl;
}