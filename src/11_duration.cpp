#include <chrono>
#include <iostream>

using namespace std;

int main()
{
    chrono::hours two_hours(2);
    chrono::minutes five_minutes(5);

    auto duration = two_hours + five_minutes;
    auto seconds = chrono::duration_cast<chrono::seconds>(duration);
    cout << "02:05 is " << seconds.count() << " seconds" << endl;
}