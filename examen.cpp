#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string sentence;
//    std::getline(std::cin, sentence);
    sentence +="You should, should you be interested, look for for more information online";
    // Manipulate the sentence here
    std::string result;
    std::string word;

    for (char c : sentence) {
        if (std::isalpha(c) || c == '\'') {
            word += std::tolower(c);
        } else {
            if (!word.empty()) {
                if (result.find(word) == std::string::npos) {
                    result += word + " ";
                }
                word.clear();
            }
        }
    }

    if (!word.empty()) {
        if (result.find(word) == std::string::npos) {
            result += word + " ";
        }
    }

    std::cout << result << std::endl;

    return 0;
}

