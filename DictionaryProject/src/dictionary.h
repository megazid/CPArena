#pragma once
#include <map>
#include <string>

class Dictionary {
private:
    std::map<std::string, std::string> dict;

public:
    void insert(const std::string &word, const std::string &meaning);
    bool remove(const std::string &word);
    bool search(const std::string &word, std::string &meaningOut);
    const std::map<std::string, std::string>& getAll() const;
};
