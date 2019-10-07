#include <iostream>
#include <fstream>
#include <string>
#include <map>

int main() {

    
    std::ifstream ifs;
    std::string key;
    char c;
    int size = 3;
    char bf[size];

    ifs.open("example.txt", std::ifstream::in);
    ifs.get(bf,size+1);
    key.assign(bf,size);

    //std::cout << key << '\n';

    while(ifs.get(c)) {
        std::cout << key << '-' << c << '\n';
        key.erase(0,1);
        key += c;
    }

    //std::cout << '\n';
    ifs.close();

    return 0;
}