#include "wordsToNumber.h"


int main() {
    std::cout << "Running wordsToNumber" << std::endl;

    const std::string input1 = "one hundred and one test test";
    std::cout << "Example 1:" << std::endl;
    std::cout << "\tInput: \"" << input1 << "\"" << std::endl;
    std::cout << "\tInput: \"" << converts(input1) << "\"" << std::endl;

    const std::string input2 = "I have one hundred apples";
    std::cout << "Example 2:" << std::endl;
    std::cout << "\tInput: \"" << input2 << "\"" << std::endl;
    std::cout << "\tInput: \"" << converts(input2) << "\"" << std::endl;


    return 0;
}