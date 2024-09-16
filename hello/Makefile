# 定义编译器
CXX = g++

# 定义编译选项
CXXFLAGS = -Wall -std=c++11

# 定义目标文件名
TARGET = hello

# 定义源文件名
SOURCES = hello.cpp

# 定义对象文件名
OBJECTS = $(SOURCES:.cpp=.o)

# 默认目标
all: $(TARGET)

# 链接目标
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 编译源文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理编译生成的文件
clean:
	rm -f $(TARGET) $(OBJECTS)

# 伪目标，确保在依赖关系中只执行一次
.PHONY: all clean
