#include <iostream>
#include <unordered_map>

std::unordered_map<char, std::string> read {
    {'0', "Zero"},
    {'1', "One"},
    {'2', "Two"},
    {'3', "Three"},
    {'4', "Four"},
    {'5', "Five"},
    {'6', "Six"},
    {'7', "Seven"},
    {'8', "Eight"},
    {'9', "Nine"}
};


int main() {
    std::string s;
    std::cin >> s;
    for (char c: s) {
        std::cout << read[c] << ' ';
    }
}