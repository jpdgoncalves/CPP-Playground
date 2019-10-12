#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    for(int i = 0; i < argc; i++) {
        cout << i << " - " << argv[i] << "\n";
    }

    int number = atoi(argv[0]);

    return 0;
}