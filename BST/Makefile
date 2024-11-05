# 定义编译器
CXX = g++
# 定义C++编译选项
CXXFLAGS = -Wall -g
# 定义LaTeX编译器
PDFLATEX = xelatex

# 定义程序的源文件
SOURCES = main.cpp
# 定义程序的可执行文件
EXECUTABLE = main
# 定义报告的源文件
REPORT_SOURCE = report.tex
# 定义报告的输出文件
REPORT_PDF = report.pdf

# 默认目标
all: run

# 编译并运行程序，直接输出结果到终端
run: $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(EXECUTABLE)
	./$(EXECUTABLE)

# 编译LaTeX报告并生成PDF
report: $(REPORT_SOURCE)
	$(PDFLATEX) $(REPORT_SOURCE)
	# 可能需要多次运行pdflatex来解决引用问题
	$(PDFLATEX) $(REPORT_SOURCE)

# 清理编译生成的文件
clean:
	rm -f $(EXECUTABLE) $(REPORT_PDF)

# 防止make自动生成*.d文件
.PRECIOUS: %.o

.PHONY: all run report clean