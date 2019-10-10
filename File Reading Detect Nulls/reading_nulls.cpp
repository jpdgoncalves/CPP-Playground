#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream reader;
    char character;
    int buffersize = 3;
    char buffer[buffersize];
    string sequence;

    reader.open("teste.txt");

    if(!reader) return -1;

    reader.read(buffer,buffersize+1);
    cout << "testing printing charr array\n"; 

    for(int i = 0; i < 3; i++) {
        cout << buffer[i] << "\n";
    }

    sequence.assign(buffer,buffersize);
    cout << "testing printing string assigned from buffer\n";
    cout << sequence << "\n";

    cout << "testing printing sequences of tree plus 1 leading character";

    while(reader.get(character)) {
        cout << sequence << "-" << character << "\n";
        sequence.erase(0,1);
        sequence += character;
    }

    reader.close();

    return 0;
}