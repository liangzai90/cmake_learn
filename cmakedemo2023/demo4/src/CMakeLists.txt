
# 向工程添加多个特定的头文件搜索路径,路径之间用空格分隔,
# 如果路径包含空格,可以使用双引号将它括起来,
# 默认的行为为追加到当前头文件搜索路径的后面。
# INCLUDE_DIRECTORIES([AFTER | BEFORE] [SYSTEM] dir1 dir2 … )
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/mylib)

# 定义变量(可以定义多个VALUE,如SET(SRC_LIST main.c util.c reactor.c))
# SET(VAR [VALUE] [CACHE TYPE DOCSTRING [FORCE]])
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)


# 发现一个目录下所有源代码文件病将列表存储在一个变量中
# AUX_SOURCE_DIRECTORY(dir  VAR)
AUX_SOURCE_DIRECTORY(./ DIR_SRCS)


# 生成可执行文件
# ADD_EXECUTABLE(bin_file_name  ${SRC_LIST})
ADD_EXECUTABLE(demo4.bin  ${DIR_SRCS})


# 为target添加需要链接的共享库
# TARGET_LINK_LIBRARIES(target  lib1  lib2 ...)
TARGET_LINK_LIBRARIES(demo4.bin Mylib)
