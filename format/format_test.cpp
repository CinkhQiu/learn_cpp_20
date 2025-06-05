#include <iostream>
#include <format>  // C++20: 或使用 #include <fmt/core.h> 替换

int main() {
    std::string name = "Leslie";
    int age = 30;
    double pi = 3.1415926;

    // 基本占位符
    std::cout << std::format("Hello, {}!\n", name);

    // 多参数
    std::cout << std::format("{} is {} years old.\n", name, age);

    // 设置浮点精度
    std::cout << std::format("Pi to 2 decimal places: {:.2f}\n", pi);

    // 宽度和对齐
    std::cout << std::format("|{:>10}|\n", "right");   // 右对齐
    std::cout << std::format("|{:<10}|\n", "left");    // 左对齐
    std::cout << std::format("|{:^10}|\n", "center");  // 居中对齐

    // 数字进制和格式控制
    int num = 42;
    std::cout << std::format("Dec: {}\n", num);
    std::cout << std::format("Hex: {:#x}\n", num);     // 十六进制，带0x
    std::cout << std::format("Oct: {:#o}\n", num);     // 八进制，带0
    std::cout << std::format("Bin: {:#b}\n", num);     // 二进制，带0b

    // 填充字符
    std::cout << std::format("Padded: {:*>10}\n", 123); // 用 * 填充至右对齐

    // bool 格式化
    std::cout << std::format("Boolean: {}, {}\n", true, false); // 输出: true, false

    // 指针地址
    void* ptr = &pi;
    std::cout << std::format("Pointer: {}\n", ptr);

    return 0;
}