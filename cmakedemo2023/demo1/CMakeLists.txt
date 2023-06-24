# 最低版本号
CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

# 工程名称
PROJECT(proj_demo1)

# 关联可执行文件， 这里是main.cpp文件生成的
ADD_EXECUTABLE(demo1.bin  main.cpp)

MESSAGE('src dir = ' ${PROJECT_SOURCE_DIR})
MESSAGE('bin dir = ' ${PROJECT_BINARY_DIR})
MESSAGE('install dir = ' ${PROJECT_INSTALL_PREFIX})

