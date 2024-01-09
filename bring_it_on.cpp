#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    int count;

    TrieNode() : count(0) {}
};

void insertWord(TrieNode* root, const std::string& word) {
    TrieNode* node = root;
    for (char ch : word) {
        if (node->children.find(ch) == node->children.end()) {
            node->children[ch] = new TrieNode();
        }
        node = node->children[ch];
        node->count++;
    }
}

int searchPrefixCount(TrieNode* root, const std::string& prefix) {
    TrieNode* node = root;
    for (char ch : prefix) {
        if (node->children.find(ch) == node->children.end()) {
            return 0;
        }
        node = node->children[ch];
    }
    return node->count;
}

int main() {
    int t;
    std::cin >> t;

    TrieNode* root = new TrieNode();
    std::vector<int> result;

    for (int i = 0; i < t; ++i) {
        std::string word;
        std::cin >> word;
        int count = searchPrefixCount(root, word);
        result.push_back(count);
        insertWord(root, word);
    }

    for (int count : result) {
        std::cout << count << std::endl;
    }

    // Clean up memory
    delete root;

    return 0;
}
