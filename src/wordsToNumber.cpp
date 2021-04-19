#include "wordsToNumber.h"
#include<algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <iterator>
#include <vector>


std::map<std::string, int> digits;
std::set<std::string> digitsInWords;

void initialize()
{
    digits["one"] = 1;
    digitsInWords.insert("one");
    digits["two"] = 2;
    digitsInWords.insert("two");
    digits["three"] = 3;
    digitsInWords.insert("three");
    digits["four"] = 4;
    digitsInWords.insert("four");
    digits["five"] = 5;
    digitsInWords.insert("five");
    digits["six"] = 6;
    digitsInWords.insert("six");
    digits["seven"] = 7;
    digitsInWords.insert("seven");
    digits["eight"] = 8;
    digitsInWords.insert("eight");
    digits["nine"] = 9;
    digitsInWords.insert("nine");
    digits["ten"] = 10;
    digitsInWords.insert("ten");
    digits["hundred"] = 10;
    digitsInWords.insert("hundred");
    digits["thousand"] = 1000;
    digitsInWords.insert("thousand");
    digitsInWords.insert("and");
}

template <class Container>
void split(const std::string& str, Container& cont, char delim = ' ')
{
    std::size_t current, previous = 0;
    current = str.find(delim);
    while (current != std::string::npos) {
        cont.push_back(str.substr(previous, current - previous));
        previous = current + 1;
        current = str.find(delim, previous);
    }
    cont.push_back(str.substr(previous, current - previous));
}

std::string wordsToNumber(std::string &str)
{
    long result = 0;
    std::vector<std::string> words;
    split(str, words);
    if (words.size() > 1) {
        for (int i = 0; i < words.size() - 1; i+=2) {
            result += digits[words[i]] * 
        }
    }
    return str;
}

std::string toLower(const std::string &input) {
    std::string output(input);
    // convert string to back to lower case
    std::for_each(output.begin(), output.end(), [](char & c){
        c = ::tolower(c);
    });
    return output;
}

bool isNumber(const std::string &input) {
    return digitsInWords.find(toLower(input)) != digitsInWords.end();
}


std::string converts(const std::string &input)
{
    std::string output(input);
    initialize();
    size_t i = 0;
    size_t possitionStartNumber = std::string::npos;
    std::string subString;
    while (i < output.size() && i != std::string::npos) {
        int nextSpace = output.find_first_of(' ', i);
        if (nextSpace != std::string::npos) {
            subString = output.substr(i, nextSpace - i);
            // check if contains punctuation marks in a loop (...)
            if (isNumber(subString)) {
                std::cout << "is a number: " << subString << std::endl;
                if (possitionStartNumber == std::string::npos) {
                    possitionStartNumber = i;
                }
            } else {
                if (possitionStartNumber != std::string::npos) {
                    subString = output.substr(possitionStartNumber, i - possitionStartNumber);
                    std::cout << "wordsToNumber: " << subString << std::endl;
                    possitionStartNumber = std::string::npos;
                }
            }
            i = nextSpace + 1;
        } else {
            subString = output.substr(i, std::string::npos);
            // check if contains punctuation marks in a loop (...)
            if (isNumber(subString)) {
                std::cout << "is a number: " << subString << std::endl;
                if (possitionStartNumber == std::string::npos) {
                    possitionStartNumber = i;
                }
            } else {
                if (possitionStartNumber != std::string::npos) {
                    subString = output.substr(possitionStartNumber, i - possitionStartNumber);
                    std::cout << "wordsToNumber: " << subString << " = " << wordsToNumber(subString) << std::endl;
                    possitionStartNumber = std::string::npos;
                }
            }
            i = std::string::npos;
        }
    }

    return output;
}