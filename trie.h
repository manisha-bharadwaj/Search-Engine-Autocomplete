#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class TrieNode {
public:
    bool isEnd;
    unordered_map<char, TrieNode*> children;

    TrieNode() {
        isEnd = false;
    }
};

class Trie {
public:
    TrieNode* root;
    Trie();

    void insert(string word);
    void suggestions(string prefix);
};
