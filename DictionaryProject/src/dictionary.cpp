#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

class Dictionary {
private:
    map<string, string> dict;     // Balanced BST (Red-Black Tree)
    string filename;

public:
    Dictionary(const string& file) {
        filename = file;
        loadFromFile();
    }

    // Load from file (only once at start)
    void loadFromFile() {
        dict.clear();
        ifstream in(filename);
        if (!in.is_open()) return;

        string word, meaning;
        while (getline(in, word) && getline(in, meaning)) {
            dict[word] = meaning;
        }
        in.close();
    }

    // Save to file (after every change)
    void saveToFile() {
        ofstream out(filename);
        for (auto &p : dict) {
            out << p.first << "\n" << p.second << "\n";
        }
        out.close();
    }

    // Insert new word (or update meaning if exists)
    void insertWord(const string& word, const string& meaning) {
        dict[word] = meaning;
        saveToFile();
    }

    // Search word
    bool searchWord(const string& word) {
        auto it = dict.find(word);
        if (it != dict.end()) {
            cout << "Meaning: " << it->second << "\n";
            return true;
        }
        return false;
    }

    // Delete word
    void deleteWord(const string& word) {
        dict.erase(word);
        saveToFile();
    }

    // Display all words
    void displayAll() {
        if (dict.empty()) {
            cout << "Dictionary is empty.\n";
            return;
        }

        for (auto &p : dict) {
            cout << p.first << " : " << p.second << "\n";
        }
    }

    // Get a copy of the map (for GUI)
    map<string, string> getAllWords() const {
        return dict;
    }
};
