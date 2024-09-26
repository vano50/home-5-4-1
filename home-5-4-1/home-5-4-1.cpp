#include <iostream>
#include <map>
#include <vector>
#include <string>

void mySort(std::vector<std::pair<char, int>>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        for (size_t j = i + 1; j < vec.size(); ++j) {
            if (vec[i].second < vec[j].second) {
                std::swap(vec[i], vec[j]);
            }
        }
    }
}

int main() {
    std::string input = "Hello, world!";

    std::map<char, int> charCount;

    for (auto c : input) {
        if (c == ' ') continue;
        ++charCount[c];
    }

    std::vector<std::pair<char, int>> vec;
    for (const auto& pair : charCount) {
        vec.push_back({ pair.first, pair.second });
    }

    mySort(vec);

    for (const auto& pair : vec) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}