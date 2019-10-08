#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

const char ALPHABET[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ','.'};
const int BF_SIZE = 3;
const int ALPHABET_SIZE = 28;

int main() {

    std::map<std::string,std::vector<int>>  sequences;
    std::ifstream ifs;
    std::string key;
    char c;
    char bf[BF_SIZE];

    ifs.open("example.txt", std::ifstream::in);

    if(!ifs) {
        std::cout << "Couldn't open file\n";
        return -1;
    }

    ifs.get(bf,BF_SIZE+1);
    key.assign(bf,BF_SIZE);

    std::for_each(key.begin(), key.end(), [](char & ch) {
        ch = ::tolower(ch);
    });

    std::cout << "First key: " << key << '\n';

    while(ifs.get(c)) {
        
        std::vector<int>& counts = sequences[key];

        if(counts.size() == 0) {
            counts.resize(ALPHABET_SIZE,0);
        }

        auto it = std::find( std::begin(ALPHABET), std::end(ALPHABET), char( std::tolower(c)));

        if(it == std::end(ALPHABET)) {
            std::cout << "No position found for " << c << "\n";
            continue;
        }

        int index = std::distance( std::begin(ALPHABET), it);
        counts[index]++;

        std::cout << key << '-' << c << " index: " << index << '\n';

        key.erase(0,1);
        key += c;
    }

    for(auto const& pair : sequences) {
        std::cout << pair.first << ":";

        for(const int count : pair.second) {
            std::cout << count << ",";
        }

        std::cout << "\n";
    }

    std::cout << '\n';
    ifs.close();

    return 0;
}