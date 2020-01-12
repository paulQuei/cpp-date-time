#include <chrono>
#include <iostream>

using namespace std;

int main()
{
    std::chrono::time_point<std::chrono::steady_clock> now = std::chrono::steady_clock::now();
    auto now2 = std::chrono::steady_clock::now();
}