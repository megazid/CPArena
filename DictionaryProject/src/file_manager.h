#pragma once
#include <string>
#include "dictionary.h"

class FileManager {
public:
    static void load(const std::string& path, Dictionary& dict);
    static void save(const std::string& path, const Dictionary& dict);
};
