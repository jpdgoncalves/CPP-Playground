#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    for(int i = 0; i < argc; i++) {
        cout << i << " - " << argv[i] << "\n";
    }

    int number = stoi(argv[1]);

    return 0;
}