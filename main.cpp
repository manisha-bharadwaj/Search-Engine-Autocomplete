#include <iostream>
#include <fstream>
#include "trie.h"
using namespace std;

int main() {
    Trie trie;

    // Load search words
    ifstream file("data.txt");
    string word;

    while(getline(file, word)) {
        trie.insert(word);
    }

    cout << "Search Engine Autocomplete System\n";

    while(true) {
        string prefix;
        cout << "\nEnter search prefix: ";
        cin >> prefix;

        trie.suggestions(prefix);
    }
}
