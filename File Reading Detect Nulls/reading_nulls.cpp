#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

const char ALPHABET[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ','.'};

int main() {

    ifstream reader;
    char character;
    int buffersize = 3;
    string sequence;

    reader.open("teste.txt");

    if(!reader) return -1;

    while(sequence.length() < buffersize) {
        reader.get(character);

        if( find( begin(ALPHABET), end(ALPHABET), character) != end(ALPHABET)) {
            sequence += character;
        }

    }

    cout << sequence << "\n";

    reader.close();

    return 0;
}