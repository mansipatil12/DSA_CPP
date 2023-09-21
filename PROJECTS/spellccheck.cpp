#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Trie Node
struct TrieNode {
    bool isEndOfWord;
    vector<TrieNode*> children;

    TrieNode() : isEndOfWord(false), children(26, nullptr) {}
};

// Function to insert a word into the trie
void insertWord(TrieNode* root, const string& word) {
    TrieNode* node = root;
    for (char c : word) {
        int index = c - 'a';
        if (!node->children[index]) {
            node->children[index] = new TrieNode();
        }
        node = node->children[index];
    }
    node->isEndOfWord = true;
}

// Function to search for a word in the trie
bool searchWord(TrieNode* root, const string& word) {
    TrieNode* node = root;
    for (char c : word) {
        int index = c - 'a';
        if (!node->children[index]) {
            return false;
        }
        node = node->children[index];
    }
    return node->isEndOfWord;
}

// Function to suggest corrections for a misspelled word
void suggestCorrections(TrieNode* root, const string& word, string currentWord, int index, int editsRemaining) {
    if (index == word.length()) {
        if (root->isEndOfWord) {
            cout << "Suggestion: " << currentWord << endl;
        }
        return;
    }

    int charIndex = word[index] - 'a';

    for (int i = 0; i < 26; ++i) {
        if (root->children[i] && (i == charIndex || editsRemaining > 0)) {
            char newChar = static_cast<char>('a' + i);
            string newWord = currentWord + newChar;
            int newEditsRemaining = (i == charIndex) ? editsRemaining : editsRemaining - 1;
            suggestCorrections(root->children[i], word, newWord, index + 1, newEditsRemaining);
        }
    }
}

int main() {
    TrieNode* root = new TrieNode();

    // Insert words into the dictionary
    insertWord(root, "apple");
    insertWord(root, "banana");
    insertWord(root, "cherry");
    insertWord(root, "grape");
    insertWord(root, "orange");

    // Spell-check a word and suggest corrections
    string inputWord = "appll";
    bool isCorrect = searchWord(root, inputWord);
    
    if (isCorrect) {
        cout << inputWord << " is spelled correctly." << endl;
    } else {
        cout << inputWord << " is misspelled. Suggestions:" << endl;
        suggestCorrections(root, inputWord, "", 0, 1);
    }

    return 0;
}
