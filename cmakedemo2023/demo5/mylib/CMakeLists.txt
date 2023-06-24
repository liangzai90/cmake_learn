message("in mylib dir ...")


# 发现一个目录下所有源代码文件，并将列表存储在一个变量中
AUX_SOURCE_DIRECTORY(.  DIR_LIB_SRCS)


# 生成动态库或静态库
# ADD_LIBRARY(libname  [SHARED|STATIC|MODULE] [EXCLUDE_FROM_ALL] SRC_LIST)
ADD_LIBRARY(Mylib  STATIC ${DIR_LIB_SRCS})
