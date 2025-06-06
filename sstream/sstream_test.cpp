#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string s, char delimeter) {
    std::vector<std::string> result;
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delimeter)) {
        result.push_back(item);
    }

    return result;
}

void print_result(const std::vector<std::string>& parts) {
    std::cout << "Split result (" << parts.size() << " parts): ";
    for (const auto& part : parts) {
        std::cout << "[" << part << "] ";
    }
    std::cout << "\n";
}

int main() {
    std::string test1 = "a,b,c";
    std::string test2 = "a,,c";
    std::string test3 = ",start,end,";
    std::string test4 = "";
    std::string test5 = "singleword";

    std::vector<std::string> result;

    result = split(test1, ',');
    std::cout << "Test 1: \"" << test1 << "\"\n";
    print_result(result);

    result = split(test2, ',');
    std::cout << "Test 2: \"" << test2 << "\"\n";
    print_result(result);

    result = split(test3, ',');
    std::cout << "Test 3: \"" << test3 << "\"\n";
    print_result(result);

    result = split(test4, ',');
    std::cout << "Test 4: \"" << test4 << "\"\n";
    print_result(result);

    result = split(test5, ',');
    std::cout << "Test 5: \"" << test5 << "\"\n";
    print_result(result);

    return 0;
}