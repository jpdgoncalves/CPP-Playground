#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    for(int i = 0; i < argc; i++) {
        cout << i << " - " << argv[i] << "\n";
    }

    double number = stod(argv[1]);

    cout << number << '\n';

    return 0;
}