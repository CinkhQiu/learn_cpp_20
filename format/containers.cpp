#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

void test_vector() {
    std::vector<int> v = {1, 2, 3, 4};
    std::cout << "[vector] ";
    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

void test_list() {
    std::list<std::string> names = {"Alice", "Bob", "Charlie"};
    std::cout << "[list] ";
    for (const auto& name : names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;
}

void test_set() {
    std::set<int> s = {3, 1, 4, 1, 5, 9};  // 自动去重并排序
    std::cout << "[set] ";
    for (int n : s) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

void test_map() {
    std::map<std::string, int> age = {
        {"Tom", 25}, {"Jerry", 22}, {"Spike", 30}
    };
    std::cout << "[map] ";
    for (const auto& [name, a] : age) {
        std::cout << name << ":" << a << " ";
    }
    std::cout << std::endl;
}

int main() {
    test_vector();
    test_list();
    test_set();
    test_map();
    return 0;
}
