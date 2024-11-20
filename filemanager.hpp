#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <fstream>
#include <stdexcept>

class FileManager {
public:
    std::string readFile(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Could not open file: " + filename);
        }

        std::string content;
        std::string line;
        while (std::getline(file, line)) {
            content += line + "\n";
        }
        return content;
    }
};

#endif