#include <iostream>
#include "Eigen/Dense"

int main() {
    // 三维向量（列向量）
    Eigen::Vector3d v1(1.0, 2.0, 3.0);
    Eigen::Vector3d v2;
    v2 << 4.0, 5.0, 6.0;

    // 三维矩阵（3x3）
    Eigen::Matrix3d mat;
    mat << 1, 2, 3,
           4, 5, 6,
           7, 8, 9;

    // 向量加法
    Eigen::Vector3d v_sum = v1 + v2;

    // 矩阵乘向量
    Eigen::Vector3d v_result = mat * v1;

    // 输出（可用 GDB 查看结果）
    std::cout << "v1:\n" << v1 << "\n\n";
    std::cout << "v2:\n" << v2 << "\n\n";
    std::cout << "v1 + v2:\n" << v_sum << "\n\n";
    std::cout << "mat * v1:\n" << v_result << "\n\n";

    return 0;
}
