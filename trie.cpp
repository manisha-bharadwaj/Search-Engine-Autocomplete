#include "trie.h"
#include <iostream>

Trie::Trie() {
    root = new TrieNode();
}

void Trie::insert(string word) {
    TrieNode* curr = root;
    for(char c : word) {
        if(curr->children.find(c) == curr->children.end()) {
            curr->children[c] = new TrieNode();
        }
        curr = curr->children[c];
    }
    curr->isEnd = true;
}

void dfs(TrieNode* node, string word, vector<string>& result) {
    if(node->isEnd)
        result.push_back(word);

    for(auto it : node->children) {
        dfs(it.second, word + it.first, result);
    }
}

void Trie::suggestions(string prefix) {
    TrieNode* curr = root;

    for(char c : prefix) {
        if(curr->children.find(c) == curr->children.end()) {
            cout << "No suggestions found\n";
            return;
        }
        curr = curr->children[c];
    }

    vector<string> result;
    dfs(curr, prefix, result);

    for(string s : result)
        cout << s << endl;
}
