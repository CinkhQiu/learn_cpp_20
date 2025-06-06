#include <iostream>
#include "Eigen/Dense"

int main() {
    // 动态大小向量
    Eigen::VectorXd v = Eigen::VectorXd::LinSpaced(5, 1.0, 5.0);  // [1, 2, 3, 4, 5]

    // 动态大小矩阵
    Eigen::MatrixXd mat(3, 3);
    mat << 1, 2, 3,
           4, 5, 6,
           7, 8, 9;

    // 矩阵乘向量
    Eigen::VectorXd result = mat * v.head(3);

    // 输出查看（GDB 会断点前停）
    std::cout << "v:\n" << v << "\\n\\n";
    std::cout << "mat:\n" << mat << "\\n\\n";
    std::cout << "mat * v.head(3):\n" << result << "\\n\\n";

    return 0;
}