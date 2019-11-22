#include <iostream>

using namespace std;

int main() {
    int signal[] = {0,2,5,10,8,4,13,15};
    for(int n : signal) {
        cout << "original signal: " << n << endl;
        n = ((n >> 1) << 1) + 1;
        cout << "quantized signal: " << n << endl;
    }
}