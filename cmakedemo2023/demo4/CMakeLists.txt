# 最低版本号
CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

# 指定工程名称，并可指定工程支持的语言。
# PROJECT(projectname  [CXX][C][Java])
PROJECT(proj_demo4)

# 向当前工程添加存放源文件的子目录，并可以指定中间二进制和目标二进制的存放位置
# ADD_SUBDIRECTORY(src_dir  [binary_dir][EXCLUDE_FROM_ALL])
ADD_SUBDIRECTORY(./mylib)
ADD_SUBDIRECTORY(./src)


# 向终端输出用户定义的信息或变量的值
# MESSAGE([SEND_ERROR|STATUS|FATAL_ERROR] "message to display" ...)
MESSAGE('src dir = ' ${PROJECT_SOURCE_DIR})
MESSAGE('bin dir = ' ${PROJECT_BINARY_DIR})
MESSAGE('install dir = ' ${PROJECT_INSTALL_PREFIX})


