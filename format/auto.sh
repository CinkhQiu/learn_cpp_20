set -e  # 一旦出错就退出脚本

echo "🧹 清理 build 目录..."
rm -rf build
mkdir build
cd build

echo "⚙️  运行 CMake 配置..."
cmake .. -DCMAKE_CXX_COMPILER=/usr/bin/g++-13 -DCMAKE_C_COMPILER=/usr/bin/gcc-13

echo "🔨 构建项目..."
cmake --build .