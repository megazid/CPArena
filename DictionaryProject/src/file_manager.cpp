#include "file_manager.h"
#include <fstream>

void FileManager::load(const std::string& path, Dictionary& dict) {
    std::ifstream in(path);
    if (!in) return;

    std::string word, meaning;
    while (std::getline(in, word) && std::getline(in, meaning)) {
        dict.insert(word, meaning);
    }
}

void FileManager::save(const std::string& path, const Dictionary& dict) {
    std::ofstream out(path);
    for (auto &p : dict.getAll()) {
        out << p.first << "\n" << p.second << "\n";
    }
}
