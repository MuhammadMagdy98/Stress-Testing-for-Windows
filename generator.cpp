#include <iostream>
#include <chrono>
#include <random>
#include <string>

using namespace std;

mt19937 rand_int(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rand_longlong(chrono::steady_clock::now().time_since_epoch().count());

int main() {
    // generate a random number between L and R inclusive
    uniform_int_distribution<int> dist(1, 100);
    
    
    cout << dist(rand_int) << "\n";

    uniform_int_distribution<long long> dist2(-10, (long long) 1e12);

    cout << dist(rand_longlong) << "\n";

}