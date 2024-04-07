# 定义编译器
CXX = g++

# 定义编译器标志
CXXFLAGS = -Wall -std=c++11

# 定义目标可执行文件
TARGET = demo

# 定义源文件
SRCS = main.cpp Table.cpp Structs.cpp

# 定义对象文件
OBJS = $(SRCS:.cpp=.o)

# 默认目标
all: $(TARGET)

# 构建目标可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 包含依赖关系
-include $(OBJS:.o=.d)

# 自动生成依赖关系
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

# 清理目标
clean:
	rm -f $(OBJS) $(TARGET) $(OBJS:.o=.d)

# 伪目标
.PHONY: all clean
