// wap to find common caracters in string

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> commonChars(const std::vector<std::string>& words) {
    std::vector<int> minFreq(26, 0);
    for (char ch : words[0]) {
        minFreq[ch - 'a']++;
    }

    for (size_t i = 1; i < words.size(); ++i) {
        std::vector<int> currentFreq(26, 0);
        for (char ch : words[i]) {
            currentFreq[ch - 'a']++;
        }

        for (int j = 0; j < 26; ++j) {
            minFreq[j] = std::min(minFreq[j], currentFreq[j]);
        }
    }

    std::vector<std::string> result;
    for (int i = 0; i < 26; ++i) {
        while (minFreq[i] > 0) {
            result.push_back(std::string(1, i + 'a'));
            minFreq[i]--;
        }
    }

    return result;
}

int main() {
    std::vector<std::string> words = {"bella", "label", "roller"};
    
    std::vector<std::string> commons = commonChars(words);
    
    std::cout << "Common characters: ";
    for (const std::string& str : commons) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}