#include <iostream>
#include <vector>
#include <string>

std::string longest_common_prefix(const std::vector<std::string>& arr) {
    if (arr.empty()) {
        return "";
    }

    size_t min_len = arr[0].size();
    for (const auto& s : arr) {
        if (s.size() < min_len) {
            min_len = s.size();
        }
    }

    std::string prefix;
    for (size_t i = 0; i < min_len; i++) {
        char c = arr[0][i];
        for (const auto& s : arr) {
            if (i >= s.size() || s[i] != c) {
                return prefix;
            }
        }
        prefix += c;
    }

    return prefix;
}

int main() {
    std::vector<std::string> arr = {"fruits", "shirt", "human"};
    std::string prefix = longest_common_prefix(arr);
    if (prefix.empty()) {
        std::cout << "-1" << std::endl;
    } else {
        std::cout << prefix << std::endl;
    }
    return 0;
}
