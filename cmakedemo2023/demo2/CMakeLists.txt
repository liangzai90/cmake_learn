# 最低版本号
CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

# 指定工程名称，并可指定工程支持的语言。
# PROJECT(projectname  [CXX][C][Java])
PROJECT(proj_demo2)

# 发现一个目录下所有源代码文件病将列表存储在一个变量中
# AUX_SOURCE_DIRECTORY(dir  VAR)
AUX_SOURCE_DIRECTORY(./ DIR_SRCS)

# 生成可执行文件
# ADD_EXECUTABLE(bin_file_name  ${SRC_LIST})
ADD_EXECUTABLE(demo2.bin  ${DIR_SRCS})

# 向终端输出用户定义的信息或变量的值
# MESSAGE([SEND_ERROR|STATUS|FATAL_ERROR] "message to display" ...)
MESSAGE('src dir = ' ${PROJECT_SOURCE_DIR})
MESSAGE('bin dir = ' ${PROJECT_BINARY_DIR})
MESSAGE('install dir = ' ${PROJECT_INSTALL_PREFIX})


