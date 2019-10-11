#include <iostream>
#include <functional>
#include <random>
#include <chrono>

using namespace std;

int main() {

    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine engine(seed);
    uniform_real_distribution<double> distribution(0.0,1.0);
    auto get_random = bind(distribution,engine);

    cout << get_random() <<'\n';

    return 0;
}