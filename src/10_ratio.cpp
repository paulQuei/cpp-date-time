#include <iostream>
#include <ratio>

using namespace std;

int main()
{
    ratio<1, 1000>       milliseconds;
    ratio<1, 1000000>    microseconds;
    ratio<1, 1000000000> nanoseconds;

    ratio_add<ratio<5, 7>, ratio<59, 1023>> result;
    double value = ((double) result.num) / result.den;
    cout << result.num << "/" << result.den << " = " << value << endl;
}